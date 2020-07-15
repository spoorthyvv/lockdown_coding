#include <stdio.h>
#include <string.h>

int check_subsequence (char [], char[]);
int main () {
  int flag;
  char s1[1000], s2[1000];
  printf("Input first string\n");
  gets(s1);
  printf("Input second string\n");
  gets(s2);
  /** Passing smaller length string first */
  if (strlen(s1) < strlen(s2))
    flag = check_subsequence(s1, s2);
  else
    flag = check_subsequence(s2, s1);
  if (flag)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}