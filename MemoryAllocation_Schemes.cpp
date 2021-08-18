#include <stdio.h>
#include<stdlib.h>
typedef struct newno{
  int data;   
}newn;
int main()
{
    printf("Hello World\n");
    newn *newnsptr; 
    newn *newndptr;
    newn *reallocptr;
    newnsptr=(newn *)malloc(sizeof(newn));
    newndptr=(newn *)calloc(sizeof(newn),2);
    reallocptr=realloc(newndptr,2);

    printf("%d\n",newnsptr->data);
    printf("%d\n",newndptr->data);
    printf("%d\n",reallocptr->data);

    
    return 0;
}