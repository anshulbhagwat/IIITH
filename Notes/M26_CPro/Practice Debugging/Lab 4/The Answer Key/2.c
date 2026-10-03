#include<stdio.h>
#include<string.h>
int main(){
char s[2000005];
scanf("%s", s);
int n=strlen(s), v[2000005]={0};
int i, j, count=1;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(s[i]==s[j]){
            count++;  
        }else{ 
            printf("%c%d", s[i], count);  
            count=1;
            i=j-1;
              break;
        }
    }
}
            printf("%c%d", s[strlen(s)-1], count);  
return 0;
}