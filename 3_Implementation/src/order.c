#include"Utilities.h"

error_t order(head *t, head *l, float fc, int qty)
{
    if(t->start==NULL || l->start==NULL){
		return ERROR_NULL_PTR;
	}
    node *p;
    p=t->start;
    while(p->data!=fc)
    {
        p=p->next;
    }
    insertend(l, fc, p->foodname, qty, (p->price*qty));
    return SUCCESS;
}