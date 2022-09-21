/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream> 
using namespace std; 
class Earth { 
    public: 
    
    const char *nation ="India"; 
  //  static int i = 9; //ISO C++ forbids in-class initialization of non-const static member 'Earth::i'
    int i=10; 
    Earth() 
    {
     cout<<this->nation<<endl;  
     
    }
    ~Earth();
    
 private: 
 
   Earth(int j) 
    {
     cout<<(this->i + j) <<endl;  
    }
    
  friend class Moon; 
};   

class Moon {
    
    public: 
    Moon() 
    {
     //   Earth::Earth(2); //Direct call of constructor not allowed 
     Earth *newEarthPointer = new Earth(8);
    };
    ~Moon(); 
}; 

int main()
{
 //   Earth newEarth; //When the constructor is private this is not possible 
    //Earth::Earth()’ is private within this context 
  //  Earth *newEarthPointer = new Earth(5); //This is also not possible if the constructor is private 
    Earth *newEarthPointer = new Earth();
    Moon *newMoon = new Moon(); //This calls the parameterized constructor or Earth because it is a friend. 

    return 0;
}
