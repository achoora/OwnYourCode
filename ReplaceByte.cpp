/******************************************************************************

Program to replace the 8th to 15th bit counting from MSB by 0xA5

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World");
    
     unsigned int number=0xAABBCCDD;
          printf("%x\n",number);

     unsigned int firstbytefromMSB=((number)&(0xff<<24));
     printf("%x\t",firstbytefromMSB);
      unsigned int secondbytefromMSB=((number)&(0xff<<16));
     printf("%x\t",secondbytefromMSB);
     unsigned int ThirdbytefromMSB=((number)&(0xff<<8));
     printf("%x\t",ThirdbytefromMSB);
      unsigned int FourthbytefromMSB=((number)&(0xff));
     printf("%x\t",FourthbytefromMSB);
     unsigned int result_pre= (0xA5<<24);
     printf("%x\t",result_pre);
     unsigned int result_post= (number&0xFF00FFFF);
     printf("%x\t",result_post);
     unsigned int final_result=(0x00A5<<16)|result_post;
     printf("%x\t",final_result);

    return 0;
}
