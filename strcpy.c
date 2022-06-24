#include <stdio.h>

void strcpy(char *oldString, char *newString)
{
  int offset = 0;

  do
  {

    newString[offset] = oldString[offset];

  } while (oldString[++offset] != 0);

  newString[offset] = 0;
}

int main(void)
{
  char str1[] = "Copy me";
  char str2[sizeof(str1)];

  strcpy(str1, str2);

  printf("str1: %s\nstr2: %s\n", str1, str2);
}
