#include <stdio.h>
#define OK 0
#define NOK -1
#define TRUE 1
int main()
{
    printf("Hello World\n");
    printf("%d\t",(!OK));
    printf("%d\t",(!NOK));
    printf("%d\t",(!TRUE));
    return 0;
}
