#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


char *getString(char *question);

int main(void)
{
  char *homePath = getenv("HOME");
  char *fileName = "/.passwords.csv";
  int pathSize = strlen(homePath) + strlen(fileName) + 1;
  char filePath[pathSize];

  memset(filePath, '\0', pathSize);

  strcpy(filePath, homePath);
  strcat(filePath, fileName);

  FILE *f = fopen(filePath, "a");

  if (f == NULL)
  {
    fprintf(stderr, "There was an error while opening the passwords file\nError: %s\n", strerror(errno));
    exit(errno);
  }

  char *website = getString("Website name: ");
  char *username = getString("username: ");
  char *password = getString("password: ");

  fprintf(f, "%s,%s,%s\n", website, username, password);

  free(website);
  free(username);
  free(password);

}

char *getString(char *question)
{
  char *line = NULL;
  size_t lineLen = 0;
  ssize_t read = 0;

  printf("%s", question);

  while ((read = getline(&line, &lineLen, stdin)) < 2)
  {
    if (read == -1)
    {
      fprintf(stderr, "Unexpectedly recived EOF");
      exit(1);
    }

    printf("Value must be greater than two characters\n");
    printf("%s", question);

    line = NULL;
    lineLen = 0;
  }


  if (line[strlen(line) - 1] == '\n')
    line[strlen(line) - 1] = 0;

  return line;
}
