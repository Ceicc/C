#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *homePath = getenv("HOME");
  char *fileName = "/.passwords.csv";
  int pathSize = strlen(homePath) + strlen(fileName) + 1;
  char filePath[pathSize];

  memset(filePath, '\0', pathSize);

  strcpy(filePath, homePath);
  strcat(filePath, fileName);

  printf("%s\n", filePath);
  printf("sizeof: %i\n", sizeof(filePath));
  printf("strlen: %i\n", strlen(filePath));
}
