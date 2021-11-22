/* A cool and simple example for function pointer usage */ 

#include <stdio.h>

int sumoftwo(int c,int d);
typedef struct Buckets {
    int itemnumber; 
    char *bucketname; 
    int (*fun)(int a,int b); 
    }Bucket;
    
int main()
{
    Bucket Buck; 
    Buck.bucketname="Blue";
    Buck.bucketname="Red";
    Buck.itemnumber=0x55;
    printf("%s\n", Buck.bucketname);
    printf("Hello World\n");
    Buck.fun=sumoftwo;
    int finalresult= Buck.fun(3,4);
    printf("%d\n",finalresult);
    return 0;
}

int sumoftwo(int c,int d)
{
    return c+d; 
}