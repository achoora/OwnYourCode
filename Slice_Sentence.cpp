/******************************************************************************

program to slice a sentence based on space 


*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char *string="reverse the words in the string";
 //   char *string_initial=string; 
    int wordcount=0; 
    int length=strlen(string);
    printf("string length is %d\n",length);
  //  string=string+length;
    while(*string!='\0')
    {
        
        if(*string==' ')
        {
            char *substring=string+1;
  //          printf("%s",(string_initial-substring));
           printf("%s\t",(substring));

            ++wordcount;
        }
        printf("%c",*string);
        ++string;
    }
    printf("\t%d",(wordcount+1));
    return 0;
}
