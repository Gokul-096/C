#include<stdio.h>
#include<stdlib.h>
int main()
{
        int a;
        scanf("%d",a);
        ST *prev,*temp;
        temp=*ptr;

        while(temp!=0)
        {
                if(temp->roll==a)
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
~         
