/* Task description:
Write a program that asks the user to enter a word, stores it in a string, and prints it letter by letter vertically. For example if you give „Word”, the result should be:

W
o
r
d

You can assume that the word is never longer than 99 characters.

*/

#include <stdio.h>

int main()
{
  char c[99];
  printf("Give me a word! ");
  scanf("%s", c);
  printf("\n");
  for (int i = 0; c[i]; i++)
  {
    printf("%c \n", c[i]);
  }

  return 0;
}
