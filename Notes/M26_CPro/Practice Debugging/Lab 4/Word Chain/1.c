#include<stdio.h>
#include<string.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    char s[100001];
    char s1[100001] = {};
    for(int i = 0;i < n;i++){
        scanf("%s",s);
        if(i==0){
            strcpy(s1,s);
        }
        if(i>0){
            int m=strlen(s1);
            if(strncmp(&s1[m-3],s,3)==0){
                char s2[100001];
                strncpy(s2,s1,m-3);
                strcpy(s1,s2);
                strcat(s1,s);
            }
            else{
                strcat(s1,s);
            }
        }
    }
    printf("%s",s1);
    return 0;
}