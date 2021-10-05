/******************************************************************************
Program which demonstrate Stack Smashing 
*******************************************************************************/
#include <stdio.h>

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
int a[10],i;    
for(i=0;F6>0;i++)    
{    
a[i]=F6%2;    
F6=F6/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("F6 in binary is %d\t",a[i]);    
}  

int count=0;
while(F6!=0)
{
F6>>=1; 
++count; 
}
printf("%d\n",count); 
    return 0;
}
