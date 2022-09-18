/******************************************************************************

The string class is an important class in C++ 
Here we search for a Word in a parent Sentence  and updates the parent  
Sentence with the word if the word is  not already present. 
******************************************************************************/
#include <iostream> 
#include <string> 

using namespace std; 

int main()
{
    string input_string="";
    int add_string = 0;
    cout<<"If you want to append a string press 1 ,else press 0"<<endl; 
    cin>>add_string;

    switch (add_string)
    {
        case 1 :
        cout << "enter the string to be added"<<endl; 
        cin>>input_string; //If dont put a break here fall through happens 
        break; 
        case 0 : 
        break ; // if you dont put a break statement here fall through happens 
        default : 
        cout<<"Invalid input"<<endl; //so you will see this printed in all valid cases also. 
        break; 
    }
    
    
    string str = "Hello programer Peter" ;
    string update_string; 
    char space=' '; 
   // string update_string=NULL; //Dont Invoke string constructor with null pointer 
    //No line number of error is given 
    cout <<"Existing string is "<<str<<endl;
    if(input_string != "") //NULL is not to be compared with 
    {
    if((str.find(input_string) == string::npos) )
    {
        cout <<"It does not contain "<<input_string<<" So we Add it"<<endl;
        str.push_back(' '); 
        update_string=str.append(input_string); 
        cout<< "Updated the existing string as "<<update_string<<endl; 
    }
    else 
    {
        cout<<"The string already contains "<<input_string<<" at Index"<<str.find(input_string)<<endl; 
    }
    }
    

    return 0;
}
