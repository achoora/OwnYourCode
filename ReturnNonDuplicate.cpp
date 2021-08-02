#include <stdio.h>
#define SIZE 7

int main()
{
    printf("Hello World\n");
    int array[7]={1,8,2,1,1,7,5};
    int newArray[7]={0};
    int i=0,j=0,k=0; 
    while(i<SIZE)
    {
        j=0;
        while(j<SIZE)
        {
            
            if(*(array+i)==*(array+j))
            {
                printf("%d\t",(++*(newArray+i)));
            }
            j++;
        }
        i++;
    }
    for(k=0;k<7;k++)
    {
   // printf("The  array values are %d\t",*(newArray+k));

        if(newArray[k]==1)
        {
            printf("The Non repeating value is %d\t",array[k]);
        }
    }
    return 0;
}
