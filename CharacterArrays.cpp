/* Different types of initialization and Errors with character strings and character arrays */ 

#include <stdio.h> 
#include <stdlib.h> 

typedef struct Container 
{
    int data; 
    char * role;
}container;

int main()
{
    container truck1;
    char truckname[10]="benz";//allowed since it is an initialization
        char tyrename[10]={'a','p','p','o','l','o'};//allowed since it is an initialization
 //   truckname="benz"; //main.c:2314: error: assignment to expression with array type since this is an assignment 
 //truckname = {'b','e','n','z'}; also error because that is also assignment 
     char *tyrebrand="ournewtyres";
    container *truck2;
    truck2 = (container *) malloc(sizeof(container)); 
  // *tyrebrand="peter";//assignment to ‘char’ from ‘char *’ makes integer from pointer without a cast
    printf("\t%s",tyrebrand);
        printf("\t%s",truckname);
                printf("\t%s",tyrename);
    return 0; 
}
