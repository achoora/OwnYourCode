// C++ program to find the prime factors of a number 
//Thanks to geeks for geeks site for the time measuring code snippet 
// https://www.geeksforgeeks.org/chrono-in-c/

#include <bits/stdc++.h>
#include <iostream> 
#include <vector> 
#include <chrono>
using namespace std;

 
int main() 
{
  
vector<int>non_factors;
  
vector<int>factors;
 
int number, i;
cin >> number;
  
for (i = 2; i < number; i++)
{
      
if ((number % i) != 0)
{
non_factors.push_back(i);
}
else
{
 
factors.push_back(i);	//can we use emplace_back here instead of push back ? 
}
}
cout << "\nAll Factors of : " << number<<endl;
vector < int >::iterator itr;
for (itr = factors.begin(); itr != factors.end(); itr++)
{    
cout << (*itr) << endl;
}  
cout << "All Prime factors of the number " <<endl;

// vector < int >::iterator itr; //re declaration error 
 // Using time point and system_clock
 std::chrono::time_point<std::chrono::system_clock> start, end;
 start = std::chrono::system_clock::now();  
for (itr = factors.begin(); itr != factors.end(); itr++)
{
if((((*itr)%2)!=0)&&(((*itr)%3)!= 0)) 
      {
cout << (*itr) << endl;
}
}
end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end - start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
}
