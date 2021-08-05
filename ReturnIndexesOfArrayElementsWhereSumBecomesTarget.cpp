#include <stdio.h>
#include<stdlib.h>
int* sumOfIntegers(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int given_array[5]={1,2,3,4,5};
    int *deserve_ptr=(void *)malloc(5);
        int *local_ptr=(void *)malloc(5);
    local_ptr=sumOfIntegers(given_array,5,9,deserve_ptr);
    printf("%u\t",*deserve_ptr);
    ++deserve_ptr;
    printf("%u\t",*deserve_ptr);
    return 0;
}
int* sumOfIntegers(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int newarr_size;
    int *newarray=returnSize;
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize;j++)
        {
            if((nums[i]+nums[j]==target) && (i<j))
            {
    //            printf("We Have A Hit");
                *newarray=i;
                printf("Return first %d\t",*newarray);
                ++newarray;
                *newarray=j;
                printf("Return second %d\t",*newarray);
                ++newarray;
                
           }
        }
    }
    return newarray; 

}
