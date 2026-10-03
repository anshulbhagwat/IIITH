#include <stdio.h>
#include <string.h>

int main(){
 char a[1000000];
 char c[1000000];
 char b[10];
 char d[10];
 scanf("%s", a);
 
 int n = strlen(a);

 for(int i=0;i<n;i++){
    int j =i;
    int count = 0;
    while((j<n) && (a[i] == a[j])){
        count++;
        j++;
        i=j-1;
    }
    b[0]=a[i];
    strcat(c,b);
     char a123=count;
     d[0] = a123;
     strcat(c,d);
 }

 printf("%s", c);


}