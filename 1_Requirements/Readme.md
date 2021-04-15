

# Requirements
## Introduction
 COVID-19 has had a significant impact on the hospitality sector. As a result, restaurant managers are paying greater attention to food order management.
Food order management allows restaurants to provide takeout orders or delivery to patrons. Because of COVID-19, food order management has become even more important. With dining rooms closed, takeout and delivery services have become lifelines for many restaurants.
Restaurant managers who are already using food order management systems need a clear idea of what works, what doesn’t, and what they need to improve. And managers without these systems are likely in a rush to find the platform that best fits their needs.


## Research

### What is food order management, and how does it work?

Online food ordering management system is a software used to ease the customer’s life. Sometimes we don’t feel like cooking or doesn’t feel like to go to the restaurants, therefore we here propose an Online Food Ordering Management System which can help the customers to get food delivered immediately. This is mostly designed for a single restaurant having various food items at valuable food price. It gives effective way to order our food and almost within no time food will be delivered. Customer, he/she has login form with password in order to secure the information details and then they can select his/her favorite food items, place the order, also mention the quantity and finally can make the payment. When the order is placed, it gets stored in the database of the restaurants and then the staffs go through the orders and processes it efficiently.

#### Food order management systems can simplify the whole process

Any automated method that collects orders online and automatically sends them to the kitchen for preparation makes things easier for restaurant staff.
Instead of dealing with phones ringing off the hook, online systems give us a lot of freedom. They require no phone time for staff, can accept multiple orders simultaneously, and leave less room for error. They’re also easier for our customers, who can order at their convenience.

#### Food order management provides another revenue channel

Even if a dining room is at 100-percent capacity, food order management allows us to provide takeout services as well.

### Benefits
![Description](https://github.com/PrakharRastogi123/LTTS_Project_In_C/blob/main/1_Requirements/Benefits.png)

## Cost and Features
### Cost On The Basis Of Machine Resources:
**Time Complexity:** It is defined as the number of times a particular instruction set is executed rather than the total time is taken. It is because the total time took also depends on some external factors like the compiler used, processor’s speed, etc.

**Space Complexity:** It is the total memory space required by the program for its execution.

**Features and Cost:**
Since we are using singly linked list data structure, so the space complexity is O(n)
Search an food item: Time Complexity: O(n)
Access an food item: Time Complexity: O(n)
Insert an food item: Time Complexity: O(1)
Delete an food item: Time Complexity: O(1)

### Cost And Features On The Basis Of Market System:
* Applying the up-to-date technologies is required for such functionalities as simple registration, placing the order, various payment options, delivery time estimation, order tracker, reviews and rates, attractive design and the great search engine. The average development cost to create a food ordering application of medium complexity could be $50 000.
* Creating web portals, It includes registration and order management. While the restaurant’s administration is responsible for content management and the control panel including financial questions via the web portal. Counting both of these options, the company could pay up to $10 000.
* The app for couriers is like the one for Uber drivers. We need to include registration, order management, and the status update. It will be enough to support the food delivery app requirements to carry out the order. So the company could spend $15 000 on its.

*Accordingly, the estimated food delivery app development cost could be close to $75,000.*



## Defining Our System
**Project Topic:** Food Order Managing System:
**Abstract:** The user can register and login into the system using his username and password, after successful login, the main menu appears in which user can add the food items from three different food categories that are snacks, main-course and dessert. The food can be added using food ID allotted to each food item given in the food menu, further the quantity of that food item can also be provided. Finally, the order made can be viewed by user or edited by the user, further he can use get bill functionality to get final order amount for payment.
**Features:**
* Admin Menu can be accessed by providing username as admin and password as admin123.
* Admin Menu has functionalities like view recent order, add food items into food menu in different food categories (snacks, main-course, dessert).
* User can register in as new user providing username and password.
* User can login by using credentials used for registering.
* User can view his order.
* User add food items using food ID followed by quantity.
* User can confirm his order, or edit it again.
* Using can get bill for the order , telling the final amount to be paid.
* User can finally logout after completing the order, or make an new order.
## SWOT ANALYSIS
![SWOT-Sample](https://github.com/PrakharRastogi123/LTTS_Project_In_C/blob/main/1_Requirements/swot.png)

# 4W&#39;s and 1&#39;H

## Who:

**Anyone who wants to order food online**

## What:

**Due to current pandemic of  Covid-19 , going out and having outside food has become difficult these days, so the idea of Online Food Management System simplifies the problem, people can order there food safely from there home with proper authentication of their data.**

## When:

**The Idea of online food ordering has been established from 2014 in India, but was not that famous, the current pandemic situation from 2020 has intensified it's need and importance.**

## Where:

**The process is online, anyone can use the system from anywhere. The only basic requirement is Internet Connectivity. If the food agency is connected to his/her area the food will be delivered to the person's home within a given time.**

## How:

**This system however can cause problems like delivering of wrong food, spoiled food, improper payment policies, late deliveries, jamming of online server,etc. According to an Express report, if users have even a single bad experience, 33% of  customers say they’d switch to a competitor and 50% have abandoned a purchase due to a poor service experience.**

# Detail requirements
## High Level Requirements: 
-- ID  | Description | Status (Implemented/Future)|
   --- |-------------|----------------------------|
   HR01 | New User Registration using username and password| Implemented
   HR02 | User Login using username and password| Implemented
   HR03 | Admin can Login using username as admin and password as admin123| Implemented
   HR04 | Admin can view recent previous order| Implemented
   HR05 | Admin can view all previous orders| Future
   HR06 | Admin can add new food items to food menu| Implemented
   HR07 | Admin can view menu and edit it| Implemented
   HR08 | Item Deletion| Future
   HR09| After User Login, user can view his order| Implemented
   HR10| User can add food items from categories: Snacks, Main-course, and Dessert in his order| Implemented
   HR11| Food item can be added using food ID along with quantity| Implemented
   HR12| User can further edit his order, or add other categories items before confirming his order| Implemented
   HR13| User can confirm his order and use get bill functionality to get overall amount to pay | Implemented
   HR14| User data is stored after program ends| Future
   HR15| Multiple user data is stored| Future



##  Low level Requirements:

-- ID  | Description | Status (Implemented/Future)|
   --- |-------------|----------------------------|
   LR01 | During login, if username and password are incorrect, the program will display an login error| Implemented
   LR02 | During Login using Admin username and password opens admin panel| Implemented
   LR03 | Pointer accessing linked list gets the NULL value, program will show null value error before performing any functions on that pointer | Implemented
   LR04 | Putting wrong food ID to add in the order, will correct that food ID or will show an error| Future
   LR05 | Admin or User when try to view an recent order, but there are no orders made, program will display the message "Previous Order does not exist!" | Implemented

