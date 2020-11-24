#include <stdio.h>
void justfun(void);
typedef struct bucket{
int apples; 
float oranges; 
char pricetags[2];
} buck;
void juststruck(buck now);


int main(void) {
  printf("Hello World\n");
 buck hello; 
 hello.apples=2;
  juststruck(hello);
  justfun();
  return 0;
}
void justfun(void)
{
  printf("This is just a call");
}
void juststruck(buck now)
{
  buck lock;
  lock=now;
  printf("The value of apples variable %d",lock.apples);
}