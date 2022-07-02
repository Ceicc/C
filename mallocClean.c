#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *mallocClean(size_t size)
{
  void *p = malloc(size);
  memset(p, '\0', size);
  return p;
}

int main(void) {

  char *s = malloc(10);
  char *sClean = mallocClean(10);

  for (size_t i = 0; i < 10; i++)
  {
    printf("s[%i]: %i\n", i, s[i]);
    printf("sClean[%i]: %i\n", i, sClean[i]);
  }
}
