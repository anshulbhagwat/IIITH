#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
typedef long long int ll;

static char str[100005], ans[100005];
static int slen, alen;

int main(){
    fgets(str, sizeof str, stdin);
    slen = strlen(str);
    for (int i = slen - 1; i >= 0;){
        while (i >= 0 && str[i] == ' ')
            --i;
        int orig = i;
        while (i >= 0 && str[i] != ' ')
            --i;
        for (int j = i + 1; j < orig; ++j)
            ans[alen++] = str[j];
        if (i + 1 < orig)
            ans[alen++] = ' ';
    }
    for (int i = 0; i < alen - 1; ++i)
        putchar(ans[i]);
}