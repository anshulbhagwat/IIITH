#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
char str[1000001];
char str1[1000001];
char str2[1000001];
scanf("%s",str);
strcpy(str1,str);
strcpy(str2,str);
int n = strlen(str),counter1=0;
int counter2 = 0;
int counter3= 0;
char temp;
if(n>1){
for (int i =0; i<n;i++){

        if(str[i]==str[n-1-i]) 
        
        {
            counter1++;
            if(counter1==(n)){
                printf("YES");
                break;
            }
            continue;
        }


        else {
            for(int j = i; j<n-1;j++){
                str1[j]=str1[j+1];
            }
            str1[n-1]='\0';
            
        
            for(int k =0,l=n-1;k<=l;k++,l--){
                temp = str2[l];
                str2[l]=str2[k];
                str2[k]=temp;
            
            }
            for(int s = i; s<n-1;s++){
                str2[s]=str2[s+1];
            }
            str2[n-1]='\0';
            
            break;


           
        
    }
}


int t = strlen(str1);
 for(int m=0;m<t;m++){
        if(str1[m]==str1[t-1-m]) 
        
        {
            counter2++;
        }
        else break;
    }
  
  
    
    for(int p=0;p<t;p++){
                if(str2[p]==str2[t-1-p]) 
        
        {
            counter3++;
        }
            else break;
        }
          
if(counter2==t || counter3==t) printf("YES");
else printf("NO");
    }
    if(n==1) printf("YES");

    return 0;
}