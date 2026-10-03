#include<stdio.h>
#include<string.h>
int main(){
    char str[1000001]="";
    scanf("%s",str);
    int n = strlen(str);

    int checker = 0;

    for(int j = 0;j<=(n/2);j++){ 
        if(str[j]==str[n-1-j]){
            continue;
        }else{
            checker = 1;
            break;
        }
    }

    if(checker ==0){
        printf("YES");
        return 0;
    }
    
     
    for (int i=0;i<(n);i++){
      checker = 0;
   
       if(str[i]==str[n-1-i]){
            continue;
        }else{
            int check1 = 0;
            int check2=0;
            
            for(int j = 0;j<=((n-1-(2*i))/2);j++){ 
                if(str[i+1+j]==str[i+1+((n-1-(2*i))-1-j)]){
                continue;
                }else{
                check1 = 1;
                break;
                }
            }
          if(check1 ==0){
            printf("YES");
            return 0;
            }

         for(int j = 0;j<=((n-1-(2*i))/2);j++){ 
            if(str[i+j]==str[i+((n-1-(2*i))-1-j)]){
            continue;
            }else{
            check2 = 1;
            break;
            }
         }
          if(check2 ==0){
            printf("YES");
            return 0;
            }

         checker=1;
        }   
        
 
}

  
        printf("NO");
        return 0;
   
}