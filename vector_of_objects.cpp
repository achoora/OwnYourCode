/******************************************************************************

Code to demonstrate the vector of objects and parameterized constructor

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std; 

class Dupe {
  private:
//  bool getit=1; 
    int get_constructor_arguement;
    public: 
    Dupe (int i):get_constructor_arguement(i)
    {
        cout<<"Passed as constructor arguement"<<endl;

        cout<<get_constructor_arguement<<endl;
    }
    ~Dupe()
    {
        
    }
    void newmethod()
    {
       // cout<<get_constructor_arguement<<"\n"<<endl; //both endl and \n is being used 
        cout<<get_constructor_arguement+5<<endl; //both endl and \n is being used 
        //cout<<"The class signature is "<<this; //Prints the address stored at the this pointer 
    }
};
int main()
{
    
    printf("Hello World \n");
    Dupe *Dupeobject=new Dupe(0);
    vector<Dupe> Dupelist;
    Dupe *firstdupe=new Dupe(1); 
    Dupelist.push_back(*firstdupe);
    Dupe *seconddupe=new Dupe(2); 
    Dupelist.push_back(*seconddupe);
    Dupe *thirddupe=new Dupe(5); 
    Dupelist.push_back(*thirddupe);
    cout<<Dupelist.size()<<endl;
    for(std::vector<Dupe> ::iterator it=Dupelist.begin();it!=Dupelist.end();++it)
    {
        cout<<"method called from at vector object  array"<<endl;
        it->newmethod();
//        cout<<"\n"<<endl;
    }
    //Dupeobject->newmethod();
    return 0;
}
