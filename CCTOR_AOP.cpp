/******************************************************************************
Copy constrcutor and assignment operator.
When new object is being initialised with another object ,in one line ,
The copy constructor is being called. 
When an existing initialised instance of a class is being assigned with another object
the assignment operator is called. 
Instead of returning *this ,used const_cast.
*******************************************************************************/
#include <iostream>

using namespace std;
class T {
    
    public :
    
    int a;
    char b; 
    T()
    {
    
    }
    T (const T& t){
        cout<<"CCTOR called"<<'\n';
    }
    T& operator=(const T &t){
        cout<<"Assignment operator called"<<endl;
        return const_cast<T&>(t);
    // return *this ; //common usage 
    }
    
    private:
    void fun();
    
};

int main()
{
    T t1,t2; 
    t1 = t2; 
    T t3 = t1;
    T t4(t1);
    cout<<"Hello World";

    return 0;
}