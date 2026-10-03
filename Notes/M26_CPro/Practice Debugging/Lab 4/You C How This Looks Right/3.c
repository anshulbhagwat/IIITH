#include <stdio.h>
#include <string.h>


int main(){
    int N,M;
    scanf("%d %d\n", &N, &M);
    char file1[1000005];
    char file2[1000005];
    char line[205];
    
    int t = 0; int t2 = 0;
    for (int i = 0; i < N+M; i++){
        char temp[205] = {0};
        
        fgets(line,sizeof(line),stdin);
        if ((line[0]!='/' || line[1] != '/')){
            t = 0; t2 = 0;
            while (line[t]!='\n'){
                if (line[t] != ' '){
                    temp[t2] = line[t];
                    t2+=1;
                }
                t+=1;
            }
            if(i<N){
            strcat(file1, temp);
            }
            else{
            strcat(file2,temp);
            }
        }
    }
    int L1 = strlen(file1);
    int L2 = strlen(file2);
    int k;
    if (L1<L2){
        k = L1/20;
    }
    else{
        k = L2/20;
    }
    int score = 0;
    for (int i = 1; i <= k; i++){
        int bs = 0;
        for (int x = 1; x <= 128 ; x++){
            int count1 = 0; int count2 = 0;
            for (int j = 20*(i-1)+1; j <= 20*i; j++){
                if (x == file1[j]) {count1+=1;}
                if (x == file2[j]) {count2+=1;}
            }
            bs += (count1-count2)*(count1-count2);
        }
    score += bs;
    }
    printf("%d\n",score);
}