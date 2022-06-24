#include <stdio.h>

int strlen(char *str)
{
  int offset = 0;

  while (str[offset] != 0)
    offset++;

  return offset;
}

int main(void)
{
  char s[] = "test string."; // 12 character

  printf("length of '%s' is %i\n", s, strlen(s));
}
