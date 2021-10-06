/******************************************************************************
Block Scope variables. 
The arguements of the function and the local variables inside the function 
declarations are in block scope so their names cannot be the same 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node {
    char *nameofsructure; 
    int id_num; 
}; 

int newname(struct node * value); 

int main()
{
    printf("Hello World\n");
    struct node *local=(struct node *)malloc(sizeof(struct node));
    int getaback=newname(local);
    free(local);
    return 0;
}
int newname(struct node * value)
{
//    int value; 
//main.c:28:9: error: ‘value’ redeclared as different kind of symbol
      int Value; 
    printf("The arguement name and local variable name are not same ");
    
}
