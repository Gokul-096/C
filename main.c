#include "header.h"
int main()
{
	struct st*hptr=0;
	char op;
	while(1)
	{
	printf("\t****STUDENT RECORD MENU ****\n");
	printf("\tA/a	:  Add New Record\n");
	printf("\tD/d	: Delete A Record\n");
	printf("\tS/s	: Show the List\n");
	printf("\tM/m	: Modify A record\n");
	printf("\tV/v	: Save\n");
	printf("\tE/e	: Exit\n");
	printf("\tT/t	: Sort the List\n");
	printf("\tL/l	: Delete All the Records\n");
	printf("\tR/r	: Reverse the List\n");
        printf("\t------------------------------\n");
	
	printf("Enter the choice");
     scanf(" %c",&op);
    if((op=='A')||(op=='a'))
    {
        add(&hptr);
    }
    else if((op=='v')||(op=='V'))
    {
	    save(hptr);
    }
    else if((op=='s')||(op=='S'))
     {
	print(hptr);     
     }
     else if((op=='r')||(op=='R'))
     {
           reverse(hptr);
     }
      else if((op=='L')||(op=='l'))
     {
           deleteall(&hptr);
     }
       else if((op=='e')||(op=='E'))
     {
           return 0;
     }



	}
}
