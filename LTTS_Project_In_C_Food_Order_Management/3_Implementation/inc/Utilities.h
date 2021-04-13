/**
 * @file Utilities.h
 * @author Prakhar Rastogi - 256102 (prkharrastogi99.pr@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __UTILITIES_H__
#define __UTILITIES_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

/**
 * @brief 
 * 
 */
typedef struct node
{

	float data;
	char foodname[50];
	int quantity;
	float price;
    struct node *next;

}node;
/**
 * @brief 
 * 
 */
typedef struct head
{
    node *start;
}head;

void insertend(head *t, float data, char foodname[25], int quantity, float price);
void ccolor(int clr);
void foodlist(head *t);
void foodlist1(head *t);
float getbill(head *t);
void order(head *t, head *l, float fc, int qty);
void cls();

#endif  /* #define __UTILITIES_H__ */