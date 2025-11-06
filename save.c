#include"header.h"
void save(struct st*ptr)
{
      char ch;	
	static int roll1=0;
	FILE*fs=fopen("data.txt","r");
	if(fs==NULL)
	{
	    fs=fopen("data.txt","w");
	    fprintf(fs,"roll\tname\tmarks\t\n");
	    goto gokul;
	}
	else
	{
		fs=fopen("data.txt","a+");
             gokul:
		while(ptr!=0)
		{ 
			++roll1;
			fprintf(fs,"%d\t%s\t%g\t\n\n",roll1,ptr->name,ptr->marks);
			ptr=ptr->next;
		}
	}
}
