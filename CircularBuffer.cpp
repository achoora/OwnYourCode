/* What is special with circular buffers */ 

/*Application areas of circular buffers are many including linux kernel and Multi Media */ 
/*Circular Buffer is actually a singly linked list with a fixed size and start out as empty. 
There are two pointers which track the start and end of the fill level in a cirular buffer 
Circular Buffer is FIFO , which ever gets added first gets removed first. Or in other words
the oldest data gets overwritten first.
The first node is called a head and the last node is called a tail in the linked list 
Circular buffers are heavily used for digital filter implementation also */

#include <stdio.h> 
#include <stdlib.h> 
#define NUMBER_OF_SEATS 5



typedef struct circubuf 
{
    int data; 
    char * role;
}sirk;

int main()
{
    int  occupancy=0; 
    int write_candidate_number=0; //start is where we start to write 
    int read_candidate_number=0; //we read the current candidate number 
    if(occupancy==NUMBER_OF_SEATS)
    {
        printf("Table is Full"); 
    }
    /*writing is nothing but putting the number at the current write_candidate_number seat; */

    write_candidate_number++;
    occupancy++;   

    if(write_candidate_number==NUMBER_OF_SEATS)
    {
    printf("All the seats have been numbers, now start over ");
    write_candidate_number=0; 
    }
    if(occupancy==0)
    {
    printf(" The Table is Empty ");
    }
    /*Read Portion*/ 
    /* Reading is nothing but reading number from any index, but once read the index is incremented to avoid reading the same again
    occupancy is reduced to indicate to the write that there is more space in the buffer*/ 

    occupancy--; // the seat number is read and candidate goes for an interiew now only one person less occuppies the table 
    read_candidate_number++; //since we have read the seat number this needs to be incremented 
    if(read_candidate_number==NUMBER_OF_SEATS)
    {
        printf("We reached the end of buffer by reading now start over ");
        read_candidate_number=0; 
    }
    sirk *roundtable;
    char chairname [10];
    sirk *squaretable;
    roundtable = (sirk *) malloc(sizeof(sirk)); 
    squaretable = (sirk *) malloc(sizeof(sirk)); 
    return 0;     
}
