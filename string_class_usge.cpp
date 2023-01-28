/******************************************************************************
string class and stanadard input usage also usage of auto 

*******************************************************************************/
#include <iostream>
#include <string> 
using namespace std;
void say_hello(std::string name)
{
    
    
    cout<<"The name of the user is "<<name<<endl; 
    
}
int main(int arg,char *argv[])
{
    cout<<"Hello World"<<endl;
    auto name= std::string {};
    std::cin >>name; 
    say_hello(name); 
    return 0;
}