/******************************************************************************
    Different methods of passing an array to a function
*******************************************************************************/
#include <stdio.h>

void array_passsq(int A[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        
        printf("%d",A[i]);
    }
        printf("\n");

}

void array_passp(int *A,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        
        printf("%d \t",A[i]);
    }
        printf("\n");

}

int main()
{
    printf("Hello World\n");
    
    int A[] = {1,3,4};
    int array_size;
    array_size = sizeof(A)/(sizeof(A[0]));
    printf("Array size is %d\n",array_size);
    array_passsq(A,3);
    array_passp(A,3);

    
    return 0;
}