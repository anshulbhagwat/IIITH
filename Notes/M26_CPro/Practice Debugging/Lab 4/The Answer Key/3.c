#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[200005];
    scanf("%s",s);
    int k=strlen(s);
    for(int i=0;i<k;i++){
        int cnt=1;
        for(int j=i+1;j<k;j++){
            if(s[i]==s[j]) {
                cnt++;
                i++;
            }
            else {continue;}
        }
        printf("%c%d",s[i],cnt);
    }
    printf("\n");
    return 0;
}