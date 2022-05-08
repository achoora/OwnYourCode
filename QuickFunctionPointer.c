/******************************************************************************
Quick Function Pointer code
*******************************************************************************/
#include <stdio.h>
void funct (int index);
void (*funcptr) (int);
int main ()
{
  printf ("Hello World\n");
  funcptr = funct;
  funcptr (5);
  return 0;
}

void
funct (int index)
{
  int array[10];
  int i = index;
  while (i < 10)
    {
      array[i] = i;
      printf ("%d\t", array[i]);
      ++i;
    }
}
