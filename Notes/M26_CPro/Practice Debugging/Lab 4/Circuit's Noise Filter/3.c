#include <stdio.h>
#include <string.h>

int is_palindrome(char *s, int i, int j) {
    // printf("checking %d %d\n", i, j);

    for (int k = 0; k < (i + j + 1) / 2; k++) {
        int m = i + k;
        int n = j - k;

        // printf("    %d %d\n", m, n);
        if (s[m] != s[n]) return 0;
    }

    return 1;
}

int main(void) {
    char s[1000001];
    scanf("%s", s);

    size_t n = strlen(s);

    int res = 1;

    for (int i = 0; i < n; i++) {
        int j = n - i - 1;
        if (s[i] != s[j]) {
            if (is_palindrome(s, i + 1, j) || is_palindrome(s, i, j - 1)) {
                break;
            } else {
                res = 0;
                break;
            }
        }
    }

    if (res)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}