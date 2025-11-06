#include"header.h"
void reverse(struct st *ptr)
{
    static int roll2=0;
	if(ptr!=0)
	{  
        ++roll;
	
                
		reverse(ptr->next);
		printf("%d %s %f\n",roll2,ptr->name,ptr->marks);
	}
}
