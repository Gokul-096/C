#include<stdio.h>
int main()
{
	char a[20];
	scanf("%s",a);
	ST *prev,*temp;
	temp=*ptr;

	while(temp!=0)
	{
		if(temp->next==a)
		{
                    if(temp==*ptr)
                    *ptr=temp->next;
                    else
                     prev->next=temp->next;

                 free(temp);
                 return;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}
