#include <stdio.h>
#include <string.h>

int main() {
  int n, m, l1 = 0, l2 = 0;
  scanf("%d %d\n", &n, &m);
  char s1[n * 200], s2[m * 200];
  for (int i = 0; i < n; i++) {
    char s[200];
    fgets(s, 200, stdin);
    if (s[0] == '/' && s[1] == '/') continue;
    for (int j = 0; j < strlen(s); j++) {
      if (s[j] != ' ' && s[j] != '\n') {
        s1[l1++] = s[j];
      }
    }
  }
  for (int i = 0; i < m; i++) {
    char s[200];
    fgets(s, 200, stdin);
    if (s[0] == '/' && s[1] == '/') continue;
    for (int j = 0; j < strlen(s); j++) {
      if (s[j] != ' ' && s[j] != '\n') {
        s2[l2++] = s[j];
      }
    }
  }
  s1[l1] = 0;
  s2[l2] = 0;

  int k = (l1 < l2 ? l1 : l2) / 20;
  int score = 0;

  for (int i = 0; i < k; i++) {
    int block = 0, f1[128], f2[128];

    for (int j = 0; j < 128; j++) {
      f1[j] = 0;
      f2[j] = 0;
    }

    for (int j = 0; j < 20; j++) {
      f1[s1[20 * i + j]]++;
      f2[s2[20 * i + j]]++;
    }

    for (int j = 0; j < 128; j++) {
      int n = (f1[j] - f2[j]);
      block += n * n;
    }

    score += block;
  }

  printf("%d\n", score);

  return 0;
}