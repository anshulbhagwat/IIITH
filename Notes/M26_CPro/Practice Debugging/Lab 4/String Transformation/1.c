#include <stdio.h>
#include <string.h>

int main() {
  char s[1000000];
  fgets(s, 1000000, stdin);
  s[strlen(s) - 1] = 0;
  int n = strlen(s), q;
  scanf("%d", &q);
  int reversed = 0;

  for (int i = 0; i < q; i++) {
    int a;
    scanf("%d", &a);
    int b = reversed ? a : (n - a - 1);
    a = reversed ? (n - a - 1) : a;

    if (a == -1) {
      reversed = !reversed;
      continue;
    }

    char c = s[a];
    if ('A' <= c && c <= 'Z') {
      s[a] = c + 32;
    } else if ('a' <= c && c <= 'z') {
      s[a] = c - 32;
    } else if ('0' <= c && c <= '9') {
      char tmp = s[a];
      s[a] = s[b];
      s[b] = tmp;
    }
  }

  if (reversed) {
    for (int i = 0; i < n / 2; i++) {
      int tmp = s[i];
      s[i] = s[n - i - 1];
      s[n - i - 1] = tmp;
    }
  }
  
  printf("%s\n", s);
  return 0;
}