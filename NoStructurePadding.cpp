/* Program which shows memory usage without  structure padding */ 

#include <stdio.h>

typedef struct mystruct {
double c;
char a;
int b;
}FST;

typedef struct mystruc {
int b;
char a;
double c;
}LST;

int main()
{
  FST  newstruct;
  int fstructsize=sizeof(FST);
  printf("Sizeof structure with double in First position %d\n",fstructsize);
  LST  newstruc;
  int lstructsize=sizeof(LST);
  printf("Sizeof structure with double in last  position %d\n",lstructsize);
  printf("Sizeof  double  %d",sizeof(double));
  return 0;
}