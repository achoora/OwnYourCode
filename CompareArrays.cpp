#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i=0; 
    int j=0;
    printf("%x\n",i);
    int array[6]={1,2,4,6,16,10};
    int sarray[6]={3,5,7,9,8,13};

    int array_size=sizeof(array)/sizeof(array[0]);
    printf("%d\n",array[i/2]);
    for(i=0;i<array_size;i++)
    {
        printf("%d\t",array[i]);
    }
  
    int *ptr=sarray;
       for(i=array_size;i>=0;i--)
    {
                printf("%d\t",*(ptr+i));

    }
    for(i=0;i<array_size;i++)
    {

            if((array[i]/sarray[i])==2)
            {
                printf("The element at %d does not violate the rule",i);
            }
            else
            {
            }
    
    }
  

    return 0;
}