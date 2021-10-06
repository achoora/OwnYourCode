/******************************************************************************
This code invoked the GMON and libc.so.6 errors. 
Keeping for analysis 

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char *string="reverse the words in the string";
 //   char *string_initial=string; 
    int wordcount=0; 
    int substringtrack=0;
    int length=strlen(string);
    int count=0; 
    int sizeofstring=length; 
    printf("string length is %d\n",length);
    string=string+length;
    while(count<length)
    {
        ++substringtrack;
        --string;

        if(*string==' ')
        {
        //    printf("detected space");
        while(substringtrack>0)
        {
        printf("%c",*(string-substringtrack));
        //++string;
        --substringtrack;
        }
        
        }
        ++length;
    }
    printf("\t%d",(wordcount+1));
    return 0;
}
