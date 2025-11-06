#include<stdlib.h>
void deleteroll(hptr)
{
        int a;
        scanf("%d",&a);
        struct st *prev,*temp;
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
