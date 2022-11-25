/******************************************************************************
The experiments with the map template 

*******************************************************************************/
#include <iostream>
#include <list> 
#include <string>
#include <queue> 
#include <map>
using namespace std;
int main()
{

map<int,string> id_name; 
priority_queue<int> bucket; 
map<int, string>::iterator itr;
//id_name.push_back(12,"Anil"); //map does not have something called push_back , it has inser ,you can only inser two values together
id_name.insert(pair<int,string>(12,"Anil"));
id_name.insert(pair<int,string>(13,"nil"));
id_name.insert(pair<int,string>(14,"il"));
//bucket.push_back(12); //There is no push back there is only push 
bucket.push(12);
swap(id_name[0],id_name[1]); //should not work since map is not an array to be indexed by single index 
//use of auto did not work to iterrate over the map 
for (itr = id_name.begin(); itr != id_name.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    
return 0;

    
}