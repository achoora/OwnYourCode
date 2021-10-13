#include<iostream>
using namespace std; 
class  Tree     //instead of typedef struct and giving a name use a class
{
public: 
int data; 
int x_,y_; 
Tree(int x,int y){x_=x;y_=y;}; 
};
/*The class Tree does not have the default constructor. It has a constructor with parameters
Tree(int, int);
So  we  need to explicitly call the constructor in the memory initializer list of the derived  branch constructor
*/
class branch: public Tree {
    public: 
    branch(int a,int b);
};
branch::branch(int a,int b):Tree(a,b) {
    
        cout<<"We Reached a branch of the tree"<<endl;
    
}
int main()
{
    Tree* trunk; 
    trunk= new Tree(3,4);
    cout<<trunk->x_<<"\t";
    cout<<trunk->y_<<endl;
    branch *newbranche;
    newbranche = new branch(4,5);
    cout<<newbranche->x_<<"\t";
    cout<<newbranche->y_<<"\t";
    return 0; 
}