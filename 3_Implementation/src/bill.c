#include"Utilities.h"

float getbill(head *t)
{
    node *p;
    float b=0;
    p=t->start;
    while(p!=NULL)
    {
        b=b+(p->price*(float)(p->quantity));
        p=p->next;
    }
    return b;
}