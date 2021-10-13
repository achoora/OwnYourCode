/* 
Object Slicing Example 

The data from the derived class object  getting lost while casting it to a base class object is called object slicing.  
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
            
       x_=x;y_=y;
	   
	             }; 
  Tree(const Tree &newtree) 
        {
            cout << "Copy constructor called.\n";
        }
        Tree& operator=(const Tree &anothertree) 
        {
            cout << "Assignment operator called.\n"; 
            return *this;
        }
  ~Tree(){
    cout<<"The destructor for Tree is called "<<endl; //This is called twice 
    /*
    To add the element to a template like vector a copy constructor is invoked on a temporary object.
    After the push_back() the temporary object is destroyed - that't the first destructor call. 
    Then vector instance goes out of scope from the main  and destroys all the elements stored - that's the second destructor call
    */
         }
};

Tree* Display(Tree *trunkobject);//The function call depends on the declaration not on definition
//Function definition and declaration are different no errow is thrown even though in definition & is being used 

// if we put it outside the class definition of tree  we get  error: ‘Tree’ was not declared in this scope; did you mean ‘free’?

/*The class Tree does not have the default constructor. It has a constructor with parameters
Tree(int, int);
So  we  need to explicitly call the constructor in the memory initializer list of the derived  branch constructor
*/
class branch: public Tree {
    public: 
    int c; 
    branch(int a,int b);
    ~branch(){
    cout<<"The branch is destructed"<<endl; //When no delete is called on "newbranche" this is not executed. 
             }
};
branch::branch(int a,int b):Tree(a,b) {
            c=a+b;
            cout<<"We Reached a branch of the tree"<<endl;    
}
int main()
{
    Tree* trunk[4]; 
    trunk[0]= new Tree(3,4);
        trunk[1]= new Tree(4,5);
    trunk[2]= new Tree(6,7);
        Tree object_trunk(1,2); //When enabled The destructor is called second time because the object_trunk goes out of scope 
//        delete object_trunk; //delete expects a pointer , because it wants to clear up the memory allocated by new.
     

    cout<<trunk[0]->x_<<"\t";
    cout<<trunk[0]->y_<<endl;
    branch newbranche(4,5);
    branch *anotherbranch=new branch(4,5);
    object_trunk=newbranche; //legal and the copy constructor will be called while copying objects like this 
 //  trunk[4]= Display(newbranche);//This causes the assignment operaor to be called ,because we are assigning a return value. 
    trunk[4]= Display(anotherbranch);
    cout<<newbranche.x_<<"\t";
    cout<<newbranche.y_<<"\t";
  //  delete newbranche;// //The destructor is called first  time because the delete causes destruction 
    // in the branch and tree in reverse order 
    return 0; 
}
/* Code with Object Slicing 
Tree* Display(Tree trunkobject)
{
 //cout<<"Attempting to print the element in derived class" <<trunkobject.c<<endl;  //error: ‘class Tree’ has no member named ‘c’ 
 cout<<"Attempting to print the element in derived class" <<trunkobject.x_<<endl;  //error: ‘class Tree’ has no member named ‘c’ 
 Tree *modifiedTree=&trunkobject;
 return modifiedTree;
}    
*/
Tree* Display(Tree *trunkobject)
{
 //cout<<"Attempting to print the element in derived class" <<trunkobject.c<<endl;  //error: ‘class Tree’ has no member named ‘c’ 
 cout<<"Attempting to print the element in derived class" <<trunkobject->x_<<endl;   
 Tree *modifiedTree=trunkobject;
 return modifiedTree;
} 
