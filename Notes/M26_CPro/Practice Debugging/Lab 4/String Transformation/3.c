#include <stdio.h>
#include <string.h>

int main(){
    char str[100000];
    scanf("%s", str);
    int n = strlen(str);

    int x;
    scanf("%d", &x);
    
    int count = 0;
    
    for (int i = 0; i < x; i++){
        int op = 0;
        scanf("%d", &op);

        if (op == -1) count++; 
        
        else {

            if (count % 2 == 0){
                if (str[op] >= '0' && str[op] <= '9'){
                    int temp = str[op];
                    str[op] = str[n - op - 1];
                    str[n - op - 1] = temp;
                }

                else if (str[op] <= 'Z'){
                    str[op] = str[op] - 'A' + 'a';  
                }

                else {
                    str[op] = str[op] - 'a' + 'A';
                }

            } else {
                if (str[n-op-1] >= '0' && str[n-op-1] <= '9'){
                    int temp = str[op];
                    str[op] = str[n - op - 1];
                    str[n - op - 1] = temp;
                }
                
                else if (str[n-op-1] <= 'Z'){
                    str[n-op-1] = str[n-op-1] - 'A' + 'a';  
                }

                else {
                    str[n-op-1] = str[n-op-1] - 'a' + 'A';
                } 
            }

        }   
    }

    if (count % 2 == 1){
        for (int j = 0; j < (n/2); j++){
            int temp = str[j];
            str[j] = str[n-j-1];
            str[n-j-1] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%c", str[i]);
    }
}