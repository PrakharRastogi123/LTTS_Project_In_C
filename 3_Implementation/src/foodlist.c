#include"Utilities.h"

errno_t foodlist(head *t)
{
	if(t->start==NULL){
		return ERROR_NULL_PTR;
	}

	printf("\n\t");
	printf("_______________________________________________________");
	printf("\n\t");
	printf("  Food Code          Name                Price         ");
	printf("\n\t");
	printf("-------------------------------------------------------");

	node *p;
    p=t->start;
    while(p!= NULL)
    {
        printf("\n\t");
        printf("  %0.1f   |  %-25s     |    %0.2f   ",p->data,p->foodname,p->price);
		printf("\n\t");
        printf("-------------------------------------------------------");
        p=p->next;
    }
	return SUCCESS;
}
