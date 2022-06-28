#include <stdio.h>
#include <stdlib.h>

char *getName() {
  char *name = malloc(10);

  printf("what's your name?\n> ");
  fgets(name, 10, stdin);

  return name;
}

int main() {

  char *name = getName();

  printf("Hello %s!\n", name);

  free(name);

  return 0;
}
