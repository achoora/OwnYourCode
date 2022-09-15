/******************************************************************************

There are n piles with each pile having n bags each. 
We are given a set of piles and we need to choose the bags  from the piles, 
such that
The number of bags  picked from ith pile  should be less than the number of bags  picked from the  i+1 th pile. 
get the total number of bags which  can be picked up from a given set of piles.  


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int best_set(int *array,int array_size)
{
    int i=0; 
    int j;
    int sum; 
    while(i<(array_size-1))
    {
        if(array[i+1]<array[i])
        {
            sum+=(2*(array[i+1])-1); 
             printf("parital sum %d + %d = %d \n ",array[i+1],array[i],sum); 
            i=i+2; //1 ,2nd is compared then 2 and 3 will be compared if the items  
        }
        else 
        {
           
            sum+=(array[i+1]+array[i]);
            printf("parital sum %d + %d = %d \n ",array[i+1],array[i],sum); 
             i=i+2;
        }
            printf("Not Entered\n");
        
        
    }
 //    printf("Last element of array %d\n",array[array_size]); The array bounds are exceeded so some value will be returned 
     printf("Last element of array %d\n",array[array_size-1]);
    if((array_size%2)!=0){
        sum=sum+array[array_size-1];
    }
    printf("%d \n",sum);

    return sum; 
    
}
int main()
{
    printf("The sum obtained is ");
   // int array_in[5]={1,6,4,7,2};  //sum =20 correct 
    //  int array_in[6]={3,2,1,4,5,8}; ///sum = 21 correct 
     int array_in[6]={1,2,4,1,8,1};
     int array_size=(sizeof(array_in)/sizeof(array_in[0]));
    int best_sum=best_set(array_in,6);
    printf("The Number of bags is given by %d\n",best_sum);
    return 0;
}