/* Prints the address of functions and use of function pointer in c */

include <stdio.h> 
 
int fun(){
    printf("Dude");
    return 0;
}

int (*funcptr)(); 

int main()  
{  
  printf("main() is at : %p\n" ,&main);
  printf("fun() is at : %p\n" ,&fun);
  funcptr = &fun; 
  printf("funptr points to %u\n",funcptr); 
  funcptr();
  return 0;  
} 