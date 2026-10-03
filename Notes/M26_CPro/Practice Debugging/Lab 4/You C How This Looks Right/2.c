#include <stdio.h>
#include <string.h>

int main(){
    int n, m;
    scanf("%d %d\n", &m, &n);
    char line[205] = {'\0'};

    char code1[200000] = {'\0'};
    char code2[200000] = {'\0'};

    for (int i=0;i<m;i++) {
        fgets(line,sizeof(line),stdin);
        if (line[0] == '/' && line[1] == '/') continue;
        strncat(code1, line, strlen(line) - 1);
    }

    for (int i=0;i<n;i++) {
        fgets(line,sizeof(line),stdin);
        if (line[0] == '/' && line[1] == '/') continue;
        strncat(code2, line, strlen(line) - 1);
    }

    int l1 = strlen(code1);
    int l2 = strlen(code2);

    int k = (l1 ^ ((l2 ^ l1)*(l2<l1)))/20;
    int BlockS = 0;

    for (int i = 0; i < k; i++){
        int arr[128];
        int bs = 0;
        for(int j = i*20; j<(i+1)*20; j++){
            arr[(int) code1[j]]++;
            arr[(int) code2[j]]--;
        }

        for(int j = 0; j<128; j++) bs += arr[j]*arr[j];

        BlockS += bs;
    }

    printf("%d", BlockS);

    return 0;
}