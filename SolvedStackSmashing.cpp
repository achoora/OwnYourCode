/******************************************************************************
Program which solved Stack Smashing 
*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define ARR_SIZE (sizeof(int)*8)

int main()
{
    printf("Hello World\t");
    int number=1; 
    printf("%.4x\t",number);
    number<<=1; 
    printf("%.4x\t",number);
    int firstbit=(number|0xff);
    printf("%.4x\t",firstbit);
        int secondbit=(number&0xff);
    printf("%.4x\t",secondbit);
    int thirdbit=(number&0xff)|(number|0xff);
    printf("%.4x\t",thirdbit);
    number>>=1;
    printf("%.4x\t",number);
    int fourthbit=(number&0xff)|(number|0xff);
        printf("Fourth bit is %.16x\n",fourthbit);
            int F1=(fourthbit<<1);
        printf("F1 is %.16x\n",F1);

     int F2=(F1<<1);
        printf("F2 is %.16x\n",F2);

     int F3=(F2<<1);
        printf("F3 is %.16x\n",F3);

     int F4=(F3<<1);
        printf("F4 is %.16x\n",F4);

     int F5=(F4<<1);
        printf("F5 is %.16x\n",F5);
        
     int F6=(F5<<1);
        printf("F6 is %.16x\n",F6);
        printf("sizeof F6 is %d\n",sizeof(F6)*8);//sizeof char is 1 and its in bytes 
     int    F7=F6;
int a[ARR_SIZE],i;    
for(i=0;F6>0;i++)    
{    
a[i]=F6%2;    
F6=F6/2;    
}    
printf("\nBinary of Given Number F6 is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}  
printf("\n");
int count=0;
while(F7!=0)
{
F7>>=1; 
++count; 
}
printf("%d\n",count); 
    return 0;
}
