#include <stdio.h>
#include <string.h>

int main(){

    char test[100001];
    fgets(test, sizeof(test), stdin);
    test[strcspn(test, "\n")]='\0';

    int len=strlen(test);

    char words[100001][100001];

    int a=0;
    int b=0;
    int c=0;

    while(a<len){
        if(test[a]!=' '){
            words[b][c]=test[a];
            c++;
        }
        else if(test[a]==' '){
            words[b][c]='\0';
            b++;
            c=0;
        }
        a++;
    }
    words[b][c]='\0';

    for(int i=0; i<=b; i++){
        printf("%s ", words[b-i]);
    }

    return 0;
}