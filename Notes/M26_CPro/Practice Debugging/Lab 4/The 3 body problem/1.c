#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int a=0;a<t;a++) {
        int n,k;
        scanf("%d %d", &n, &k);
        char array[n+1];
        scanf("%s", array);
        int ans=k;
        int curr=0;
        for (int j=0;j<=k-1;j++) {
            if (array[j]=='C') {
                curr++;
            }
        }
        if (ans>curr) {
            ans=curr;
        }
        if (ans==0) {
            printf("0\n");
            break;
        }
        int flag=0;
        for (int i=1;i<=n-k;i++) {
            if (array[i-1]=='C') {
                curr--;
            }
            if (array[i+k-1]=='C') {
                curr++;
            }
            if (ans>curr) {
                ans=curr;
            }
            if (ans==0) {
                printf("0\n");
                flag=1;
                break;
            }
        }
        if (flag==0) {
            printf("%d\n", ans);
        }
    }
    return 0;
}