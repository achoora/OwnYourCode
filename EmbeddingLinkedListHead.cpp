/*Embedding a Linked list Node in a structure to keep track of the network of structures */

#include <stdio.h>
#include <stdlib.h>
typedef struct linkednode {
struct linkednode *next;
struct linkednode *previous;
}LNODE;
typedef struct node {
int data; 
char *nodelabel;
LNODE nodelist; 
}Node;

int main()
{

Node *Tree;
Tree = (Node *)malloc(sizeof(Node));
printf("%d\n",Tree->nodelist);
return 0; 
} 
