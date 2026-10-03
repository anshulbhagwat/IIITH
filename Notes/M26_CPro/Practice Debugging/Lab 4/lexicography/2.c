#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s",s);
    int n=strlen(s);
    char mi[n],ma[n];
    strcpy(mi,s);
    strcpy(ma,s);
    for (int i=0;i<n;i++){
        char t=s[0];
        for (int j=0;j<n-1;j++){
            s[j]=s[j+1];
        }
        s[n-1]=s[0];
        if (strcmp(s,mi)<0)
            strcpy(mi,s);
        if (strcmp(s,ma)>0)
            strcpy(ma,s);
    }
    printf("%s\n%s",mi,ma);
}