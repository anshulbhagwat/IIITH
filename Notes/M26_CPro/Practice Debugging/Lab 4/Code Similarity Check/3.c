#include<stdio.h>
#include<string.h>
int main (){
    char secret[100002];
    char guess[100002];
    scanf("%s", secret);
    scanf("%s", guess);
    int p=strlen(secret);
    int count=0;
    int i, j=0;
    char freqa[]={};
    char freqb[]={};

    for (i=0; i<p; i++){
        if (secret[i]==guess[i]){
            count++;
        }
        else {
            freqa[secret[i] -'a']++;
            freqb[guess[i]-'a']++;
        }
    }

    int disp=0;

    for (i=0;i<=25;i++){
        if (freqa[i]<=freqb[i]){
            disp= disp+freqa[i];
        }
        if (freqa[i]>freqb[i]){
            disp= disp+freqb[i];
        }
    }

    printf("%d %d", count, disp);
    return 0;
}