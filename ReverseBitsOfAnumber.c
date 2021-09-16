/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

// function to reverse bits of a number
unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
        printf("\nThe original number is  %.6x\n",n);

     
    // traversing bits of 'n' from the right
    while (n > 0)
    {
        // bitwise left shift
        // 'rev' by 1
        rev <<= 1;
         
        // if current bit is '1'
        if (n & 1 == 1)
            rev ^= 1;
                 printf("%.6x\t",rev);

        // bitwise right shift
        // 'n' by 1
        n >>= 1;
             
    }
    printf("\nThe original number became  %.6x\n",n);
     
    // required number
    return rev;
}
 
// Driver program to test above
int main()
{
    unsigned int n = 0x11110;
    unsigned int reversed;
    reversed=reverseBits(n);
    printf("The reversed number is %.3x",reversed);
    
    return 0;
}