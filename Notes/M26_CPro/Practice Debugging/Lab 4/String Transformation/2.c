#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[1000001] ; 
    scanf("%s" , str) ; 
    int len = strlen(str) ; 
    int q ; 
    scanf("%d", &q) ; 

    
    int extra = (int)'a' - 'A' ;
    int rev = 0 ; 
    for(int i=0 ; i<q ; i++){
        int n ; 
        scanf("%d" , &n) ; 
         
        if(n == -1){
             rev ++ ; 
             continue ; 
        }
        else {
            if(rev%2)n=len-n-1 ;
            if(str[n] < 30){
                char temp = str[n] ; 
                str[n] = str[len - n -1] ; 
                str[len-n-1] = temp ;
            }
            else if((str[n] - 'A' >= 0) && (str[n]-'Z' <=0)) str[n] = str[n]+extra ; 
            else str[n] = str[n] - extra ; 
        }
    }
    if(rev%2) {
        for(int l=0 ; l<len/2 ; l++){
            char temp = str[l] ; 
            str[l] = str[len-l-1] ; 
            str[len-l-1] = temp ; 
        }
    }
    printf("%s" , str) ; 
    
}