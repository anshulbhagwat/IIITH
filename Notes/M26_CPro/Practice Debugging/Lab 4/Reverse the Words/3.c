#include <stdio.h>
#include <string.h>
int main(){
    char s[100001];
    fgets(s,sizeof(s),stdin);
    int len=strlen(s);
    int c=0;
    int i=len-1,j=len-1;
    for(int i=len-1;i>=0;i++){
        if(s[i]==' '){
            for(int k=i;k<j;k++){
                printf("%c",s[k]);
                j=i;
            }
        }
        else{
            continue;
        }
    }
}