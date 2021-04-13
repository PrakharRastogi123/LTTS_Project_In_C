#include"Utilities.h"
void cls()
{
    system("cls");
}
void main()
{
    head x, s, m, d, o;
    x.start=s.start=m.start=d.start=o.start=NULL;
    float fcode;
    int qty, lo;
    insertend(&s, 1.1, "Samosa", 1, 50);
    insertend(&s, 1.2, "Grilled Cheese Sandwich", 1, 100);
    insertend(&s, 1.3, "Nachos", 1, 150);
    insertend(&s, 1.4, "Chicken Burger", 1, 150);
    insertend(&s, 1.5, "BBQ Chicken Roll", 1, 250);
    insertend(&m, 2.1, "Pav Bhaji", 1, 200);
    insertend(&m, 2.2, "Punjabi Thali", 1, 350);
    insertend(&m, 2.3, "Mexican Sizzler", 1, 250);
    insertend(&m, 2.4, "Peri Peri Chicken Pizza", 1, 250);
    insertend(&m, 2.5, "Margherita Pizza", 1, 200);
    insertend(&m, 2.6, "Veg Pulao", 1, 250);
    insertend(&m, 2.7, "Chicken Handi Biryani", 1, 350);
    insertend(&d, 3.1, "Chocolate Overload Waffle", 1, 150);
    insertend(&d, 3.2, "Cinnamon Waffle", 1, 150);
    insertend(&d, 3.3, "Chocolate Cake", 1, 250);
    insertend(&d, 3.4, "Red Velevet Cake", 1, 350);
    insertend(&d, 3.5, "Strawberry Mouse", 1, 100);
    insertend(&d, 3.6, "Orea Freakshake", 1, 150);
    insertend(&d, 3.7, "Fruit Milkshake", 1, 80);
    //login
    char uid[20], pwd[20], uid1[20], pwd1[20], c=' ', k=' ';
    int i=0, ch;
    while(1)
    {
        cls();
        showLogo();
mainscr: printf("\n\nWelcome! Please Enter Your Choice: 1. Login 2.New User 3.Exit\n");
        scanf("%d", &ch);
        if(ch==3)
            break;
    //register new user
        if(ch==2)
        {
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &uid1);
            printf(" \n\n                  ENTER PASSWORD:-");
            i=0;
            while(i<20)
            {
                pwd1[i]=getch();
                c=pwd1[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            pwd1[i]='\0';
            printf("\n\n            Registered Successfully!\n");
            Sleep(2000);
        }
        else
        {
            printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  ");
            printf(" \n\n                  ENTER USERNAME:-");
            scanf("%s", &uid);
            printf(" \n\n                  ENTER PASSWORD:-");
            c=' '; i=0;
            while(i<20)
            {
                pwd[i]=getch();
                c=pwd[i];
                if(c=='\r') break;
                else printf("*");
                i++;
            }
            pwd[i]='\0';
            //USERMENU
            if(strcmp(uid,uid1)==0&&strcmp(pwd,pwd1)==0)
            {
                printf("\n\n            LOGIN SUCCESFULL!");
                Sleep(2000);
                cls();
                int i, ch;
      mainmenu: printf("Please Enter Your choice: 1.View Menu 2.View Previous Order 3.Log Out\n");
                scanf("%d", &ch);
                if(ch==2)
                {
                    if(o.start==NULL)
                    {
                        printf("Previous Order does not exist!\n");
                        Sleep(2000);
                        cls();
                        goto mainmenu;
                    }
                    else
                    {
                        cls();
                        foodlist1(&o);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto mainmenu;
                        }
                    }

                }
                else if(ch==1)
                {
             order: printf("Enter Choice:\n");
                    printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                    scanf("%d", &ch);
                    while(1){
                    switch(ch)
                    {
                        case 1: foodlist(&s);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &fcode);
                                printf("Enter Quantity of Food:\n");
                                scanf("%d", &qty);
                                order(&s, &o, fcode, qty);
                                foodlist1(&o);
                                break;
                        case 2: foodlist(&m);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &fcode);
                                printf("Enter Quantity of Food:\n");
                                scanf("%d", &qty);
                                order(&m, &o, fcode, qty);
                                foodlist1(&o);
                                break;
                        case 3: foodlist(&d);
                                printf("\n");
                                printf("Enter Food Code:\n");
                                scanf("%f", &fcode);
                                printf("Enter Quantity of Food:\n");
                                scanf("%d", &qty);
                                order(&d, &o, fcode, qty);
                                foodlist1(&o);
                                break;
                        default: printf("Invalid Choice.\n");
                    }
        afterorder: printf("\n\n");
                    printf("\n\t\tEnter Choice: \n\t\t1.Hungry For More? \n\t\t2.View Order \n\t\t3.Confirm Order?\n");
                    scanf("%d", &ch);
                    if(ch==1)
                    {
                        cls();
                        goto order;
                    }
                    else if(ch==2)
                    {
                        cls();
                        printf("Current Order:\n");
                        foodlist1(&o);
                        goto afterorder;
                    }
                    //billing
                    else if(ch==3)
                    {
                        cls();
                        foodlist1(&o);
                        printf("\nTotal amount to pay: %0.2f\n", getbill(&o));
                        printf("\nEnjoy Your Meal!\n");
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            cls();
                            goto mainmenu;
                        }
                    }
                }
                }
                else if(ch==3)
                {
                    cls();
                    goto mainscr;
                }
                else
                    printf("\nInvalid Choice.\n");
            }
            //admin
            else if(strcmp(uid,"admin")==0&&strcmp(pwd,"admin123")==0)
            {
                printf("\n\n            WELCOME ADMIN");
                Sleep(3000);
                cls();
                int adch;
        admin:  printf("\n\n            Enter Choice:\n");
                printf("            1. View Menu\n");
                printf("            2. Update Menu\n");
                printf("            3. View Recent Order\n");
                printf("            4. Log Out\n");
                scanf("%d", &adch);
                cls();
                if(adch==4)
                    goto mainscr;
                switch(adch)
                {
                    case 1:cls();
                        printf("\nSNACKS:\n");
                        foodlist(&s);
                        Sleep(3000);
                        printf("\nMAIN COURSE:\n");
                        foodlist(&m);
                        Sleep(3000);
                        printf("\nDESSERT:\n");
                        foodlist(&d);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                        }
                        break;
                    case 3: //Sleep(3000);
                        cls();
                        printf("Recent Order:\n");
                        foodlist1(&o);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto admin;
                        }

                        break;
                    case 2:
                        cls();
                        float fcu, pu;
                        char fnameu[50];
                        printf("UPDATE MENU\n");
                        printf("What do you want to update?\n");
                        printf("Enter Choice:\n");
                        printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                            case 1: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insertend(&s, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&s);
                                    break;
                            case 2: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insertend(&m, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&m);
                                    break;
                            case 3: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insertend(&d, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&d);
                                    break;

                        }
                        goto admin;
                        break;

                default:printf("\nInvalid Choice\n");
                }
            }
            else
            {
                printf("\n\n        INCORRECT USERNAME OR PASSWORD");
                Sleep(2000);
            }
    }
}
}
