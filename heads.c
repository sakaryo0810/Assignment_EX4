#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int headsOrTails[5]={0};
    int counterForHeads=0;
    char name[20];
    srand((unsigned)time(NULL));

    printf("Who are you?\n>");
    scanf("%s",name);
    printf("Hello, %s\n",name);

    for(int i=0;i<5;i++){
        headsOrTails[i]=rand()%2;
        if(i<3&&headsOrTails[i]==0){
            counterForHeads++;
        }
    }
    for(int i=0;i<3;i++){
        printf("Round %d: %s\n",i+1,headsOrTails[i]==0?"Heads":"Tails");
    }
    printf("Heads: %d, Tails: %d\n",counterForHeads,3-counterForHeads);

    return 0;
}
