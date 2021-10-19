/* simple calloc allocating an array of  structure */ 

#include <stdio.h>
#include<stdlib.h>
typedef struct dummybox{
    char *boxname; 
    int boxnumber; 
    
}box; 

    int main() {
        box *newbox; 
        newbox = calloc(10, sizeof(newbox));
        if (newbox == NULL) {
            printf("Error! memory not allocated.\n");
            exit(0);
        }
        else
        {
            printf("\t \t Allocated the memory and bytes are initialized to zero ");
        }
        
        free(newbox);
        return 0;
    }