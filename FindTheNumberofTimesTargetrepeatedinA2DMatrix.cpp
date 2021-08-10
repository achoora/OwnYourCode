	#include <stdio.h>
	#define ROW 6
	#define COL 6
	int target_selection(int array[][6],int target);
	int main()
	{
		printf("Hello, World!\n");
		   int i,j; 
	int array[ROW][COL]={};
	for(i=0;i<ROW;i++)
	{
		printf("\n");
		for(j=0;j<COL;j++)
	{
	   // printf("%d\t",array[i]);
		array[i][j]=(i+1)*(j+1);
		printf("%d\t",array[i][j]);
		
	}

	}
	   int count_target;
	   count_target=target_selection(array,12);
	   printf("The target is repeated %d times",count_target);
		return 0;
	}
	int target_selection(int array[ROW][COL],int target)
	{
		int i,j; 
		int return_count=0; 
	for(i=0;i<ROW;i++)
	{
		printf("\n");
		for(j=0;j<COL;j++)
	{
	   if(array[i][j]==target)
	   {
		   ++return_count;
	   } 
		
	}
	}
		return return_count;
	}