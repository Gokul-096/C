#include<stdio.h>
#include<stdlib.h>
struct st
{
	char name[100];
	float mark;
	struct st *next;
};
int main()
{
       struct st *hptr=0;
	char ch;
	char op;
	do
	{
         struct st *temp=(struct st *)malloc(sizeof(struct st));
           scanf("%s%f",temp->name,&temp->mark);
            if(hptr==0)
            {
	      temp->next=0;
	      hptr=temp;
             }
            else
             {
	       struct st *last=hptr;
                  while(last->next!=0)
		     last=last->next;
                 temp->next=last->next;
	             last->next=temp;
	     }
	    printf("enter the option\n");
	    scanf(" %c",&op);
           }while((op=='A')||(op=='a'));
}
