#include <stdio.h>
#include <string.h>

int main() {
  char *string = "hello world!!";

  // char *address = &string;

  printf("my length is %i\n", strlen(string));

  printf("my size is %i\n", sizeof(string));

  printf("im at memory address %p\n", string);

  return 0;
}
