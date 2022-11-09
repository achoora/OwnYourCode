/******************************************************************************
A class for bit operations with all types of copy aned move operators. 
The recursive binary routine is

*******************************************************************************/
   
#include <iostream>
  
using namespace std;

void
num2bin (unsigned n) 
{
  
    /* step 1 */ 
    if (n > 1)
    
num2bin (n / 2);
  
 
    /* step 2 */ 
    cout << n % 2;

}


class bitoperations
{

public:
bitoperations ();
  
bitoperations (int num, int i) 
  {
    
cout << "Only i bits remains ,all other bits from MSB is 0  " << endl;
    
cout << "The Number is " << num << endl;
    
cout << "Number in Binary" << endl;
    
num2bin (num);
    
cout << "\n";
    
cout << "The Mask is " << ((1 << i) - 1) << endl;
    
cout << "Mask in Binary" << endl;
    
num2bin (((1 << i) - 1));
    
cout << "\n";
    
cout << "Result of Mask operation is " << endl;
    
cout << (num & ((1 << i) - 1)) << endl;
  
} 
bitoperations (const bitoperations & bitops);
  
bitoperations & operator= (const bitoperations & bitops);
  
bitoperations (const bitoperations && bitops);
  
bitoperations & operator= (const bitoperations &&);
  
~bitoperations ();

};


int
main () 
{
  
cout << "Hello World";
  
bitoperations * setmask = new bitoperations (353, 4);
  
 
return 0;

}
