void deletename(struct st**ptr)
{
	char a[20];
	scanf("%s",a);
	struct st*prev,*temp;
	temp=*ptr;

	while(temp!=0)
	{
		if(temp->name==a)
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
