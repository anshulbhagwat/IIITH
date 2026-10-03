#include <stdio.h>
#include <string.h>

int main(){

    int i,j=0,k,n,p,l;
    scanf("%d %d",&n,&k);
    char str1[500000];
    

    scanf("%s",str1);
    l= strlen(str1);

    for(i=1;i<n;i++){
        char str2[1000];
        scanf("%s",str2);
    for(p=0;p<k;p++){
        if(str2[p]==str1[l-k+p]){
            j++;
        } 
    }
    if (j==k){
        strcat(str1,str2+k);
    }
    else{
        strcat(str1,str2);
    }
    j=0;
}
printf("%s",str1);
return 0 ; 

}