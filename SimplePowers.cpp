#include<iostream>
#include <math.h>
using namespace std; 
int main()
{
  cout<<"The Code has come home "<<endl;
  int A[5];
  int i;
  for (i=0;i<5;i++)
  {
  A[i]=pow(i,i);
  cout<<A[i]<<endl;
  }
  return 0;
}