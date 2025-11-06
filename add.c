#include"header.h"
void add(struct st**ptr)
{
       
       
	char ch;
	char op;
         struct st *temp=(struct st *)malloc(sizeof(struct st));
	 printf("Enter the name and marks");
           scanf("%s %g",temp->name,&temp->marks);
            if(*ptr==0)
            {
	      temp->next=0;
	      *ptr=temp;
             }
            else
             {
	       struct st *last=*ptr;
                  while(last->next!=0)
		     last=last->next;
                 temp->next=last->next;
	             last->next=temp;
	     
	     }  
}
