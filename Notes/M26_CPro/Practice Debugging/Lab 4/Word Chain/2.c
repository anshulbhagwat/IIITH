#include<stdio.h>
#include<string.h>
int main(){
    char current[500001]={};
    char prev[500001]={};
    long long int n,k,t=0,yes=0,i;
    scanf("%lld %lld",&n,&k);
    scanf("%s",prev);
    for(i=0;i<n-1;i++){
    
    scanf("%s",current);
    long long int l1=strlen(prev),l2=strlen(current);
    for(i=l1-k;i<l1;i++){
        if(prev[i]==current[t]){
            yes+=1;
            t++;
        }
        else{
            break;
        }
    }
    //printf("%lld",yes);
    if(yes==k){
        strcpy(prev,strcat(prev,current+k));
        //printf("%s",strcat(prev,current+k));
    }
    else{
        strcpy(prev,strcat(prev,current));
    }
    }
    printf("%s",prev);
    return 0;
}