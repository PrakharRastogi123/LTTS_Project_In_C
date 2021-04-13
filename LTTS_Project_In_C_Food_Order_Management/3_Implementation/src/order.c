#include"Utilities.h"
/**
 * @brief 
 * 
 * @param t 
 * @param l 
 * @param fc 
 * @param qty 
 */
void order(head *t, head *l, float fc, int qty)
{
    node *p;
    p=t->start;
    while(p->data!=fc)
    {
        p=p->next;
    }
    insertend(l, fc, p->foodname, qty, (p->price*qty));
    return;
}