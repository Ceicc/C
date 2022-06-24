#include <stdio.h>
#include <string.h>

int strfind(char *str, char *srch)
{
  int strLength = strlen(str);
  int srchLength = strlen(srch);
  int srchProgress = 0;
  int foundIndex = 0;

  for (int i = 0; i < strLength; i++)
  {
    if (str[i] != srch[srchProgress]) // No match, reset the counters and continue looping.
    {
      srchProgress = 0;
      foundIndex = 0;
      continue;
    }

    if (srchProgress == 0) // First matching character.
      foundIndex = i;

    srchProgress++;

    if (srchLength == srchProgress) // Matched the full search, break from the loop.
      break;
  }

  return foundIndex;
}

int main(void)
{
  char s[] = "friends";
  char searchStr[] = "end";

  int index = strfind(s, searchStr);

  printf("%i\n", index);
}
