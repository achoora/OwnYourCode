/******************************************************************************

Initialization of static variables and use of them in functions 

*******************************************************************************/
#include <stdio.h>
int uninitilized_global_k; 
int initialized_global_h=12;

void void_dummy()
{
    static int function_frequency=0; 
    int i=12; 
    ++i; 
    printf("%s called %d time\n",__FUNCTION__,function_frequency);
    ++function_frequency;
    printf("The value is  %d\n",i);
    
}
int  int_dummy()
{
     static int function_frequency=0; 
     int i=12; 
 //   ++i; 
     ++i;
        printf("%s called %d time\n",__FUNCTION__,function_frequency);
        ++function_frequency;
     printf("The value is  %d \n",i);
    return i; 
}
static int  static_int_dummy()

{
    static int function_frequency=0; 
    static int i=12; 
    ++i; 
    printf("%s called %d time\n",__FUNCTION__,function_frequency);
    ++function_frequency;
    printf("The value is  %d\n",i);
    return i; 
}
int main()
{
    static int  uninitialized_s_i;
    int uninitialized_non_s_j; 
    
    printf("Hello World\n");
    printf("uninitialized static local %d\n",uninitialized_s_i);

    printf("uninitialized non static local %d\n",uninitialized_non_s_j);
    
    printf("uninitialized global %d\n",uninitilized_global_k);
    
    printf("initialized global %d\n",initialized_global_h);
    void_dummy(); //implicit declaration if function definition is not there 
    void_dummy();
    void_dummy();
    int_dummy();
    int_dummy();
    int_dummy();
    static_int_dummy();
    static_int_dummy();
    static_int_dummy();
    // void_dummy(); //nothing is returned control is not passed back
    
    return 0;
}
