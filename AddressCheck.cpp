/******************************************************************************
Address of functions in C++ //On line GDB gives the address as 1 !! 
*******************************************************************************/
#include <iostream>  
using namespace std;  
int fun(){
    printf("Dude");
    return 0;
}

int (*funcptr)(); 

int main()  
{  
  std::cout << "main() is at : " <<&main<< std::endl;  
  std::cout << "fun() is at: " <<&fun<< std::endl;
  funcptr = &fun; 
  std::cout << "funptr points to" <<funcptr<< std::endl;
  funcptr();
  return 0;  
}  