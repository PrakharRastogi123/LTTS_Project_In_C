#include"Utilities.h"

error_t order(head *t, head *l, float fc, int qty)
{
    
    node *p;
    p=t->start;
    while(p->data!=fc)
    {
        p=p->next;
    }
    insertend(l, fc, p->foodname, qty, (p->price*qty));
    return SUCCESS;
}