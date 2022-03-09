#include <stdio.h>
#include <stdlib.h>

typedef struct test {  //when there is no typdef the commented errors occur

int testid; 
char *testname;
void (*funcptr)(int a , char b); 

}pf;
void sum(int p, char q); 

int main()
{

pf new_test; //When there is no typedef it throws error unknown type name test  
int j;
char k; //Even if I wrongly passed the arguements as a an integer to a function which takes char as an arguement it didnot complain with plain gcc

j=10;
k=20;
//new_test.funcptr=&(sum(j,k));//request for member funcptr in something which is not a structure or union

new_test.funcptr=&sum;

new_test.funcptr(j,k);

return 0 ;

}
void sum(int p,char q) 
{

if(getchar()=='y')   //getchar doesnot take arguements ,it has only void argument 
{

printf("success in writing\n");

printf("%d\n", p+100); 

}

}

