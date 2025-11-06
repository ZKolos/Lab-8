/* Task description:
Write a program, that first asks the user the number of real values to read; then it reads the values into a dynamically allocated array.
At the end the program should print the elements of the array backwards, and release the allocated memory!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int len;
  printf("How many values to read? ");
  scanf("%d", &len);
  double *arr = (double *)malloc(len);
  printf("Give me the values:\n");
  for (int i = 0; i < len; i++)
  {
    scanf("%lf", &arr[i]);
  }
  printf("\nThe values in reverse order:\n");
  for (int j = len; j > 0; j--)
  {
    printf("%f\n", arr[j - 1]);
  }
  free(arr);
  return 0;
}
