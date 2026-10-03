#include<stdio.h>
#include<string.h>
int main(){
    char s[100001],g[100001];
    scanf("%s",s);
    scanf("%s",g);
    int c=0;
    int f1[26],f2[26];
    for(int i=0;i<26;i++){
        f1[i]=0;
        f2[i]=0;
    }
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]==g[i]){
           c++;
           f1[s[i]-'a']--;
           f2[g[i]-'a']--;
        }
        else{
        f1[s[i]-'a']++;
        f2[g[i]-'a']++;
        }
    }
    int d=0;
    for(int i=0;i<26;i++){
        if(f1[i]==f2[i] && f1[i]!=0 && f2[i]!=0){
        d++;
        }
    }
    printf("%d %d",c,d);
}