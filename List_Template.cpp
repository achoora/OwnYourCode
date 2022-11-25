/******************************************************************************
The experiments with the list template 

*******************************************************************************/
#include <iostream>
#include <list> 
#include <string>
using namespace std;
int main()
{
    printf("Hello World");
 list<string> word_list; 
 word_list.push_back("Anil");
 word_list.push_back("is");
 word_list.push_back("trying");
  word_list.push_back("to");
 word_list.push_back("learn");
  word_list.push_back("templates");
 list<string>::iterator it ; 
 int count = word_list.size(); 
// list<string> new_list = word_list.reverse(); //you cannot do it in one line 
 list<string> new_list;
  word_list.reverse(); 
  for(it=word_list.begin(); it!=word_list.end();++it)
     {
     new_list.push_back(*it);    
     cout<<*it<<endl;
     }
 cout<< count <<endl; 
 while((!word_list.empty())&& (count!=0))
 {
     cout<<"Word list is not empty"<<endl;
 //    cout<<word_list.end()<<endl; word_list.end() is iterator type 
     for(it=word_list.begin(); it!=word_list.end();++it)
     {
     cout<<*it<<endl;
 //    word_list.remove(*it);
 //use erase instead of remove. 
 //    word_list.erase(it);
     ++it;
 //    --count; //this single step decrement causes an infinite loop since the count used it word count 
 //and the iterator does move more than the word count places 
       count= count-2;; 
     cout<<count<<endl;
   //  break;
 }

 }
 cout<<"The New List Is ***************<<endl;" <<endl; 
 
  for(it=new_list.begin(); it!=new_list.end();++it)
     {
     cout<<*it<<endl;
     }
 /*
 else 
 {
     switch(count)
     case(0):
     break; //You cannot put a break in side an if else without a loop or switch 
     // error: break statement not within loop or switch
 }
 */
 
    return 0;
}
