/******************************************************************************

Program to reverse a pair of numbers in a linked list -- WIP   

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> 

typedef struct node {
    int data;
    struct node *next; 
}Node; 

Node * preparenode(Node **heads, int data); 
void reverse_pair(Node **start);
void swap(Node * one,Node *two);
void printnodes(Node *beginner); 

int main()
{
    Node *beginnode; 
    Node *Newnode; 
    beginnode= (Node *) malloc(sizeof(Node)); 
    
    Newnode=preparenode(&beginnode,2);
    Newnode=preparenode(&beginnode,3);

    Newnode=preparenode(&beginnode,4);

    Newnode=preparenode(&beginnode,5);

    Newnode=preparenode(&beginnode,6);

    Newnode=preparenode(&beginnode,7);
    printnodes(beginnode);
    reverse_pair(&beginnode);
    printnodes(Newnode);


    printf("Hello World\n");
    printf("%d\t",Newnode->data);


    return 0;
}
Node *preparenode(Node **heads, int data)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->data=data;
    temp->next=*heads;
    *heads=temp;
    return *heads;
}    
void reverse_pair(Node **start)
{
    Node *first=*start; 
    Node *second=first->next;
      if((first->next!=NULL) && (second->next!=NULL))
      {
       printf ("__FUNCTION__ = %s\n", __FUNCTION__);
       swap(first,second);
       if(second!=NULL)
       {
       first=first->next;
       }
       if(first!=NULL)
       {
       second=first->next;
       }
    }
}

void swap(Node * one,Node * two)
{
    printf ("__FUNCTION__ = %s\n", __FUNCTION__);

    Node *temp; 
    
    *temp=*one;
    *one=*two;
    *two=*temp;
       printf ("__FUNCTION__ = %s\n", __FUNCTION__);

}

void printnodes(Node *beginner)
{
           printf ("__FUNCTION__ = %s\n", __FUNCTION__);

    
    if(beginner!=NULL)
    {
    while(beginner->next!=NULL)
    {
        printf("%d\t\n",beginner->data);
        beginner=beginner->next;
    }
    
}
}