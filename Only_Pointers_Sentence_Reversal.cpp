/******************************************************************************

//Print a Sentence in reverse using only pointers. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char *string="reverse the words in the string";
    int l_count=0;
    int length=0;
    while(*string!='\0')
    {
     ++string; 
     ++length;        
    }
    string-=length;
    printf("string length is %d\n",length);
    char *destination=string+length;
    int iter=0;       
    while(*string!='\0')
    {
       
    if(*destination!=' ') //Back ward traversal till the empty space 
    {
      ++l_count; //keep the distance from the end of word o  the prefix space 
           iter=0;
        }
        else
        {
        while(iter<l_count) 
       {
       ++iter;
       printf("%c",*(destination+iter));
       }
       printf("\t");
       l_count=0;
       }
       if(length==1)
       {
       --destination;
       while(iter<=l_count) 
       {

       printf("%c",*(destination+iter));
            ++iter;
       }
       }
       string++;
       destination--; 
       length--;
    }
    return 0;
}
