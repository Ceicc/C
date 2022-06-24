#include <stdio.h>
#include <string.h>

int main(void)
{
  // arrays initialzer count for null bytes
  char arr0[0];
  char arr1[1];

  printf("sizeof arr0: %i\n", sizeof(arr0));
  printf("sizeof arr1: %i\n", sizeof(arr1));
  printf("strlen arr0: %i\n", strlen(arr0)); // 6!!
  printf("strlen arr1: %i\n", strlen(arr1));
}
