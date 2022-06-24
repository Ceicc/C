#include <stdio.h>

void reverse(char *oldStr, char *newStr)
{
  int reverseOffset = strlen(oldStr);
  int incrementOffset = 0;

  newStr[reverseOffset] = '\0'; // Null byte

  while (--reverseOffset != -1)
    newStr[incrementOffset++] = oldStr[reverseOffset];
}

int main(void)
{
  char s[] = "reverse me";
  char sR[sizeof(s)];

  reverse(s, sR);

  printf("%s\n", sR);
}
