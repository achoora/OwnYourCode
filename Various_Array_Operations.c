/******************************************************************************

Array reversal , Taking only half of an array ,To be clear about pass by value 
and pass by reference in case of arrays. 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*
void wrong_array_size_intialization(int a[], int array_count)
{
    //Variable sized object may not be initialized 
    int new_array[array_count]={0};
    printf("Try to print the first element of  the size variable array%d", wrong_array_size_intialization[0]); 
    
}
*/
void replace_array_element(int a[],int num)
{
    a[2]=num; 
    printf("%d\n",a[2]);
}
int *return_halfarray(int a[], int array_cnt)
{
    int i=0;; 
    int *halfarray=malloc((array_cnt/2)*sizeof(int));
    for(i=0;i<((array_cnt/2));i++)
    {
        halfarray[i]=a[i];
    }
    return halfarray; 
}
void swap_byvalue(int i ,int j)
{
    int tmp; 
    tmp=i;
    i=j;
    j=tmp;
}
void swap_byaddress(int *i ,int *j)
{
    int tmp; 
    tmp=*i;
    *i=*j;
    *j=tmp;
}
void reverse_array_passbyvalue(int a[], int array_cnt)
{
    int count;
    for(count=0;count<(array_cnt/2);count++)
    {
        swap_byvalue(a[count],a[array_cnt-count]);
    }
}
int *reverse_array_passbyaddress(int *a, int array_cnt)
{
    int count=0;
    printf("size of array to be reversed %d\n",array_cnt);
    int *reversed_array=(int *)malloc(array_cnt*sizeof(int));
    for(count=0;count<array_cnt;count++)
    {
       *(reversed_array+count)=*(a+array_cnt-count-1) ;  //This is the core logic 
    }
    printf("The reversed array is ");
    for(count=0;count<array_cnt;count++)
    {
        printf("%d\t",reversed_array[count]);
    }
    return reversed_array;
}

int main()
{
    printf("Hello World\n");
    int array[5]={1,2,3,4,5};
    int *partial_array; 
    int *reversed_array;
    int array_size=(sizeof(array)/sizeof(array[0]));
    printf("The array size initially %d\n",array_size);
  //  replace_array_element(array,15);
    partial_array=return_halfarray(array,array_size);
    printf("Parital array size %d\n",partial_array[0]);
    reverse_array_passbyvalue(array,array_size); //why it is not inverting  the array ?
    printf("First item in the array  after pass by value %d\n",array[0]);
    reversed_array=reverse_array_passbyaddress(array,array_size); //When address get involved pointer comes 
    printf("First item of reverseed array %d\n",reversed_array[0]);

    return 0;
}
