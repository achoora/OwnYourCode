/******************************************************************************
The program illustrates the use of bit fields and the boundary alignment.
Also illustrates the use of pragma packing 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
typedef struct Book
{
  //  unsigned catalogue_number  : 3;    // 0..7   (3 bits) //only unsigned make things unsigned char in c 
  unsigned int catalogue_number:3;
  unsigned int published_year:6;	// 0..31  (6 bits)
  unsigned int:0;		// Force alignment to next boundary.
  unsigned int price:5;		// 0..12  (5 bits)
  unsigned int pagenumber:8;	// 0..100 (8 bits)
} Bookstore;
typedef union referencematerials
{
  Bookstore mybookstore;
  double digitalmedia;

} references;

typedef struct Bus
{
  //  unsigned catalogue_number  : 3;    // 0..7   (3 bits) //only unsigned make things unsigned char in c 
  unsigned int Bus_number:3;
  unsigned int purchase_year:6;	// 0..31  (6 bits)
  unsigned int price:5;		// 0..12  (5 bits)
  unsigned int capacity:8;	// 0..100 (8 bits)
} BusDepo;

#pragma pack(0)
typedef struct Van
{
  //  unsigned catalogue_number  : 3;    // 0..7   (3 bits) //only unsigned make things unsigned char in c 
  unsigned int Van_number:3;
  unsigned int price:4;		// 0..15  (4 bits)
} VanDepo;

#pragma pack(1)
typedef struct Cycle
{
  //  unsigned catalogue_number  : 3;    // 0..7   (3 bits) //only unsigned make things unsigned char in c 
  unsigned int Cycle_number:3;
  unsigned int price:4;		// 0..15  (4 bits)
} CycleDepo;
int
main ()
{
  printf ("With alignment structure size %d \n", sizeof (Bookstore));	//8
  printf ("Without alignment structure size %d \n", sizeof (BusDepo));	//4
  printf ("Without alignment sizeof structure which uses 7 bits  %d \n",
	  sizeof (VanDepo));
  printf ("Without alignment and using pragma packing (0) structure which uses 7 bits  %d \n", sizeof (VanDepo));	//4
  printf ("Without alignment and using pragma pack (1) structure which uses 7 bits  %d \n", sizeof (CycleDepo));	//1 
// The alignment is on 4 byte boundaries 
  Bookstore *mybook = (Bookstore *) malloc (sizeof (Bookstore));
  //  mybook->published_year=2022; //overflow_
  mybook->price = 30;		//even using 34 for a 6 bit bitfield causes overfow 
  //  printf("%d\n",    mybook->published_year); //overflow_
  printf ("%d\n", mybook->price);	//overflow_
  references myreference;
  myreference.digitalmedia = 111111111111111111;
  printf ("%d\n", myreference.mybookstore.catalogue_number);	//4 
  return 0;
}
