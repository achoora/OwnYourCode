/*

program to reverse each word and entire sentence 

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char *string="reverse the words in the string";
 //   char *string_initial=string; 
    int wordcount=0; 
    int length=strlen(string);
    printf("string length is %d\n",length);
    string=string+length;
    while(length>0)
    {
        printf("%c",*string);
        --string;
        --length;
    }
    printf("\t%d",(wordcount+1));
    return 0;
}