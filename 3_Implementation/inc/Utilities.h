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
#include <unistd.h>
/**
 * @brief For handling errors using enum flag values
 * 
 */
typedef enum error_t{
	ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    START_EXISTS=1,
    NO_HEAD_EXIST=2,
    INVALID_NAME=4,
    ID_EXISTS=5
}error_t;


/**
 * @brief Structure of an food item in the form of an LINKED LIST Node
 * 
 */
typedef struct node
{

	float data; // Food ID
	char foodname[50];
	int quantity;
	float price;
    struct node *next;

}node;

/**
 * @brief Pointer to point and access or to traverse the food linked list
 * 
 */
typedef struct head
{
    node *start;

}head;

/**
 * @brief To insert an food item to the end of Linked List, and for preparing out food order list
 * 
 * @param t : head pointer of the linked list
 * @param data :food item ID
 * @param foodname 
 * @param quantity 
 * @param price
 * @return error_t 
 */

error_t insertend(head *t, float data, char foodname[25], int quantity, float price);

/**
 * @brief Print the food linked list
 * 
 * @param t : head pointer of the linked list
 * @return error_t
 */
error_t foodlist(head *t);

/**
 * @brief Get the order bill amount and returns the price to be payed
 * 
 * @param t : head pointer of the linked list
 * @return float 
 */
float getbill(head *t);

/**
 * @brief Adds the food item and quantity to our final food order linked list
 * 
 * @param t : head pointer of the Food menu linked list
 * @param l : head pointer of the Food order linked list
 * @param fc : Food Data or ID
 * @param qty : food quantity
 * @return error_t
 */
error_t order(head *t, head *l, float fc, int qty);

/**
 * @brief Clear cmd screen
 */
void cls();

/**
 * @brief Printing Banner: HOTEL-PRAKHAR
 * 
 */
void showLogo();

#endif  /* #define __UTILITIES_H__ */