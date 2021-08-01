#include <stdio.h>
#define SIZE 5

int main()
{
    printf("Hello World\n");
    int array[SIZE]={0,12,3,4,15};
    int sum=0; 
    int tmp1;
    int tmp2;
for(int i=0;i<SIZE;i++)
{
    for(int j=0;j<SIZE;j++)
    {
        if((array[i]^array[j])>sum)
        {
            sum=(array[i]^array[j]); 
            tmp1=array[i];
            tmp2=array[j];
        }
    }
}
printf("Sum is %d\t",sum);
printf("The numbers giving largest XOR are %d and %d",tmp1,tmp2);
    return 0;
}