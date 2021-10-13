/* 
Program to demonstrate the concepts of constructor , destructor and the order of the destructor call. 
//Need to check how new and delete  internally works 
*/
#include<iostream>
using namespace std; 
class  Tree     //instead of typedef struct and giving a name use a class
{
public: 
int data; 
int x_,y_; 
Tree(int x,int y){
            cout<<"We are in the Tree class called from "<<this<<endl;
            
x_=x;y_=y;}; 
~Tree(){
    cout<<"The destructor for Tree is called "<<endl; //This is called twice 
    /*
    When we  add an element to a template like vector a copy constructor is invoked on a temporary object.
    After the push_back() the temporary object is destroyed - that't the first destructor call. 
    Then vector instance goes out of scope from the main  and destroys all the elements stored - that's the second destructor call
    */
}
};
/*The class Tree does not have the default constructor. It has a constructor with parameters
Tree(int, int);
So  we  need to explicitly call the constructor in the memory initializer list of the derived  branch constructor
*/
class branch: public Tree {
    public: 
    branch(int a,int b);
~branch(){
    cout<<"The branch is destructed"<<endl; //When no delete is called on "newbranche" this is not executed. 
}
};
branch::branch(int a,int b):Tree(a,b) {
    
        cout<<"We Reached a branch of the tree"<<endl;
    
}
int main()
{
    Tree* trunk[3]; 
    trunk[0]= new Tree(3,4);
        trunk[1]= new Tree(4,5);
    trunk[2]= new Tree(6,7);
  //      Tree object_trunk(1,2); //When enabled The destructor is called second time because the object_trunk goes out of scope 
//        delete object_trunk; //delete expects a pointer , because it wants to clear up the memory allocated by new.
     

    cout<<trunk[0]->x_<<"\t";
    cout<<trunk[0]->y_<<endl;
    branch *newbranche;
    newbranche = new branch(4,5);
    cout<<newbranche->x_<<"\t";
    cout<<newbranche->y_<<"\t";
    delete newbranche;// //The destructor is called first  time because the delete causes destruction 
    // in the branch and tree in reverse order 
    return 0; 
}