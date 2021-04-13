#include"Utilities.h"
/**
 * @brief 
 * 
 * @param t 
 */
void foodlist(head *t)
{

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
}
void foodlist1(head *t)
{
	printf("\n\t");
	printf("___________________________________________________________________");
	printf("\n\t");
	printf("  Food Code       Name                       Quantity      Price   ");
	printf("\n\t");
	printf("-------------------------------------------------------------------");

	node *p;
    p=t->start;
    while(p!= NULL)
    {
		printf("\n\t");
        printf("  %0.1f   |  %-25s      |    %2d      |  %0.2f   ",p->data,p->foodname, p->quantity, p->price);
		printf("\n\t");
		printf("------------------------------------------------------------------");
        p=p->next;
    }
}