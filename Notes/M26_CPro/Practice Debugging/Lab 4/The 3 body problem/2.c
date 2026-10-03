#include <stdio.h>
int main(){
    int testnum;

    scanf("%d",&testnum);
    for(int i = 0;i<testnum;i++){
        int cent;
        int survival ;
        scanf("%d %d\n",&cent, &survival);
        char state[cent];
        for(int j=0;j<cent;j++){
            scanf("%c",&state[j]);

        }
        int min=0;
        int flag=0;
        int C = 0;
        int S = 0;
        for(int z=0;z<survival ;z++){
                if(state[z]=='S') {S++;}
                else C++;
                
            }
        min = C;
        for(int j=1;j<(1+cent-survival);j++){

            if(state[j-1]=='S'&& state[j+survival]=='C'){
                C++;
            }
            else if(state[j-1]=='C'&& state[j+survival]=='S'){
                C=C-1;
                if(C<min){
                    min = C;
                }
            }
        }
        printf("%d\n",min);
    }
    return 0;
}