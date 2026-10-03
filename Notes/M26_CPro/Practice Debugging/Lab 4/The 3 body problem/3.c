#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);
    int n[t],k[t],o[t];
    
    int i=0;
    while(i<t){
        scanf("%d %d", &n[i],&k[i]);
       char s[n[i]];
       for(int j=0;j<n[i];j++){
        scanf("%c", &s[j]);
       }
        int x=0;
       for(int j=0;j<k[i];j++){
        if(s[j]=='C'){
            x++;
        }}
        int min=x;
        for(int j=0;j<n[i]-k[i];j++){
            if(s[j]=='C'||s[j+k[i]]=='C'){
                continue;
            }
            else if(s[j]=='C'||s[j+k[i]]=='S'){
                x--;
            }
            else if(s[j]=='S'||s[j+k[i]]=='C'){
                x++;
            }

            if(min>x) min =x;
        }
       o[i]=min;
      
        i++;
    }

    for(int k=0;k<t;k++){
        printf("%d\n", o[k]);
    }
    
        
    return 0;
}