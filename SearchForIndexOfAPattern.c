/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello World\n");
    int Itemlist[]={1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,0,1};
    int i,j; 
    int count=0; 
    int *targetarray=NULL; 
    int found_start=0; 
    int pattern_occurences=0;
    int last_matching_index=0; 
    targetarray=(int *)malloc(4*sizeof(int)); 
    int numelements=(sizeof(Itemlist)/sizeof(int));
    printf("The array length  in  here is  %d bytes \n",sizeof(Itemlist));
    printf("The size  of integer  here is  %d bytes \n",sizeof(int));
    printf("The number of elements are %d\n",numelements);
    for(i=0;i<(sizeof(Itemlist)/sizeof(int));i++)
    {
        if(0==Itemlist[i])
        {
         //   printf("Matched to zero \n");
            if((1==Itemlist[i+1])&&(found_start==0))
            {
          //      printf("Matched to one \n");
                found_start=1; 
                 targetarray[count]=i; 
                 targetarray[++count]=i+1;
                 ++count; 
                 pattern_occurences=1;
            }
            else if(1==Itemlist[i+1])
            {
                
                ++pattern_occurences;
                last_matching_index=i;
                
            }
            else
            {
               
            }
        }
        targetarray[2]=last_matching_index-1;
        targetarray[3]=last_matching_index;
        
        
    }
    printf("The pattern occured %d times",pattern_occurences);
    printf("The index of first match is at (%d,%d)\n",targetarray[0],targetarray[1]);
    printf("The index of the last match is at (%d,%d)",targetarray[2],targetarray[3]);
    return 0;
}
