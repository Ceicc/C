#include <stdio.h>

void skip(char *msg)
{
  printf("%s\n", msg + 6);
}

int main(void)
{
  char *msg_from_amy = "Don't call me";
  skip(msg_from_amy);
}
