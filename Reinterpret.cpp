/******************************************************************************
The reinterpret_cast example
The reinterpret_cast converts between (data)types by interpreting the underlying arrangement 
of bits used to represent the data.
This can lead to truncation(Or Will it?)
Its purely compile time , tells the compiler to treat a type as a new type mentioned within <>. 
//Think how the compilers like LLVM and MLIR  interprets the statements 
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
struct Source { int j;
int k; } s1;
s1.j=3344;
s1.k=5566;


int* p1 = reinterpret_cast<int*>(&s1); 
    // p1->j=10;//error: request for member ‘j’ in ‘* p1’, which is of non-class type ‘int’
    printf("%d\n",*p1);
    ++p1;
    cout<<"Hello World\n";
    printf("%d\n",*p1);
    return 0;
}