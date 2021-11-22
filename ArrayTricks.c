/* Simple Array Tricks */ 

#include <stdio.h>

int main()
{
 int cool_array[3]={1,2,3};
 char char_cool_array[3]={'A','B','C' }; 
 char *str_cool="PQR"; //The declaration created anonymous object of type char[3] and initialises it. 
 //Attempt to modify is undefined behaviour 
 printf("%x \t",cool_array); //Prints an adress 
// printf("%x",cool_array[]); //Prints Error 
 printf("%d \t ",cool_array[0]);
 printf("%x \t",char_cool_array); //Prints an adress 
 printf("%c \t ",cool_array[0]); //Prints nothing 
 printf("%c \t ",(char)cool_array[0]); //Prints nothing 
 printf("%c \t ",char_cool_array[0]); //Prints first character
 char_cool_array[0]='Z';
 printf("%c \t ",char_cool_array[0]); //Prints Modified  character
 printf("%x \t ",str_cool); //Prints Address 
 printf("%c \t ",str_cool[0]); //Prints P 
//      str_cool[0]='T'; //Program exits with Error 
 return 0;
}