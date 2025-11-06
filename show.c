#include "header.h"
void print(struct st*ptr)
{
	static roll=0;
	while(ptr!=0)
	{
		++roll;
	 printf("--------------------------------------------\n");
	printf("*\t%d\t %s\t %g\t*\n",roll,ptr->name,ptr->marks);
		ptr=ptr->next;
        printf("---------------------------------------------\n");
	}

}

