/******************************************************************************
The Stringize and Token passing operators example 
*******************************************************************************/
#include <stdio.h>
#define append(first, second) first##second
#define begin(first) #first 
#define end(second) #second 
int main(void)
{
    char *begin = begin(Hello World);
    char *end = end(Peter);
    char *beginend="Dude its awesome"; 
    printf("%s", append(begin, end));
    return 0;
}