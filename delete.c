#include "header.h"
void delete1(struct st**ptr)
{
	        char dele;
            printf("-------------------------------");
             printf("r/R\t\tDelete the roll\t\t\n");
             printf("n/N\t\tDelete the name\t\t\n");
            printf("-------------------------------");
             scanf(" %c",&dele);
            if((dele=='r')||(dele=='R'))
               deleteroll(&hptr);
              else if((dele=='n')||(dele=='N'))
                 deletename(&hptr);
}
