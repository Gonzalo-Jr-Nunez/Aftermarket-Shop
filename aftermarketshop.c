#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

long double CheckOutTotal(void);
char ShippingInformation(void);
int CreditCard(void);

long double zero;
long double zero_one;
long double zero_two;
long double zero_three;
long double zero_four;
long double zero_five;
long double sum;

int quantity;
int quantity_one;
int quantity_two;
int quantity_three;
int quantity_four;
int quantity_five;

int unit;
int unit_one;
int unit_two;
int unit_three;
int unit_four;
int unit_five;

int main(void)

{
    // Some spaces between for readability purposes
    printf("\n");

    printf("                    WELCOME TO SPOON SPORTS USA\n");

    printf("\n");

    printf("Spoon Products Availiable For Purchase:\n");

    printf("\n");

    // A two dimensional array with all of the products available for sale
    char products[6][100];

    strcpy(products[0], "ID #0: Spoon 3DGT Wing (Carbon)       -     Civic FK8   -   $4,110.00");
    strcpy(products[1], "ID #1: Spoon Aero Bumper Front, FRP   -     Civic FK8   -   $3,200.00");
    strcpy(products[2], "ID #2: Spoon Aero Bumper Rear, FRP    -     Civic FK8   -   $3,025.00");
    strcpy(products[3], "ID #3: Spoon 3DGT Wing (Carbon)       -    S2000 AP1/2  -   $3,285.00");
    strcpy(products[4], "ID #4: Spoon Aero Bumper [Front]      -    S2000 AP1/2  -   $2,290.00");
    strcpy(products[5], "ID #5: Spoon Aero Bumper [Rear]       -    S2000 AP1/2  -   $1,945.00");

    // Printing the list of products available for sale
    for (int i = 0; i < 6; i++)
    {
        printf("%s\n\n", products[i]);
    }

    printf("\n");

    printf("SHOPPING CART: \n");

    CheckOutTotal();
    ShippingInformation();
    CreditCard();

    return 0;
}

long double CheckOutTotal(void)
{

    bool CheckOut = true;
    while (CheckOut == true)

    {
        printf("\nPlease Enter the Product(s) You'd Like To Purchase BY I.D. # in the Space Provided Below (Or 8 to End Session): \n");
        int ShoppingCart;
        scanf("%d", &ShoppingCart);

        if (ShoppingCart == 0)

        {
            printf("\nSelect Quantity of Spoon 3DGT Wing (Carbon) - Civic FK8\n");

            scanf("%d", &quantity);

            printf("\n%d Spoon 3DGT Wing (Carbon) - Civic FK8 - Added to Cart !\n", quantity);

            if (quantity >= 1)
            {
                zero = quantity * 4110.00 + zero;
                printf("%.2Lf\n", zero);
                unit = unit + quantity;
            }
            else if (quantity < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 1)
        {
            printf("\nSelect Quantity of Sp0oon Aero Bumper Front, FRP - Civic FK8\n");

            scanf("%d", &quantity_one);

            printf("\n%d Spoon Aero Bumper Front, FRP - Civic FK8 - Added to Cart !\n", quantity_one);

            if (quantity_one > 0)
            {
                zero_one = quantity_one * 3200.00 + zero_one;
                printf("%.2Lf\n", zero_one);
                unit_one = unit_one + quantity_one;
            }
            else if (quantity_one < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 2)
        {
            printf("\nSelect Quantity of Spoon Aero Bumper Rear, FRP - Civic FK8\n");

            scanf("%d", &quantity_two);

            printf("\n%d Spoon Aero Bumper Rear, FRP - Civic FK8 - Added to Cart !\n", quantity_two);

            if (quantity_two >= 1)
            {
                zero_two = quantity_two * 3025.00 + zero_two;
                printf("%.2Lf\n", zero_two);
                unit_two = unit_two + quantity_two;
            }
            else if (quantity_two < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 3)
        {
            printf("\nSelect Quantity of Spoon 3DGT Wing (Carbon) - S2000 AP1/2\n");

            scanf("%d", &quantity_three);

            printf("\n%d Spoon 3DGT Wing (Carbon) - S2000 AP1/2 - Added to Cart !\n", quantity_three);

            if (quantity_three >= 1)
            {
                zero_three = quantity_three * 3285.00 + zero_three;
                printf("%.2Lf\n", zero_three);
                unit_three = unit_three + quantity_three;
            }
            else if (quantity_three < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 4)
        {
            printf("\nSelect Quantity of Spoon Aero Bumper [Front] - S2000 AP1/2\n");

            scanf("%d", &quantity_four);

            printf("\n%d Spoon Aero Bumper [Front] - S2000 AP1/2 - Added to Cart !\n", quantity_four);

            if (quantity_four >= 1)
            {
                zero_four = quantity_four * 2290.00 + zero_four;
                printf("%.2Lf\n", zero_four);
                unit_four = unit_four + quantity_four;
            }
            else if (quantity_four < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 5)
        {
            printf("\nSelect Quantity of Spoon Aero Bumper [Rear] - S2000 AP1/2\n");

            scanf("%d", &quantity_five);

            printf("\n%d Spoon Aero Bumper [Rear] - S2000 AP1/2 - Added to Cart !\n", quantity_five);

            if (quantity_five >= 1)
            {
                zero_five = quantity_five * 1945.00 + zero_five;
                printf("%.2Lf\n", zero_five);
                unit_five = unit_five + quantity_five;
            }
            else if (quantity_five < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 6)
        {
            printf("\nShopping Cart: \n");

            printf("\n%d Spoon 3DGT Wing (Carbon)       -   Civic FK8       $%.2Lf      ($4110.00 Per Unit)\n", unit, zero);
            printf("\n%d Spoon Aero Bumper Front, FRP   -   Civic FK8       $%.2Lf      ($3200.00 Per Unit)\n", unit_one, zero_one);
            printf("\n%d Spoon Aero Bumper Rear, FRP    -   Civic FK8       $%.2Lf      ($3025.00 Per Unit)\n", unit_two, zero_two);
            printf("\n%d Spoon 3DGT Wing (Carbon)       -   S2000 AP1/2     $%.2Lf      ($3285.00 Per Unit)\n", unit_three, zero_three);
            printf("\n%d Spoon Aero Bumper [Front]      -   S2000 AP1/2     $%.2Lf      ($2290.00 Per Unit)\n", unit_four, zero_four);
            printf("\n%d Spoon Aero Bumper [Rear]       -   S2000 AP1/2     $%.2Lf      ($1945.00 Per Unit)\n", unit_five, zero_five);

            long double sum = zero + zero_one + zero_two + zero_three + zero_four + zero_five;
            printf("\nTotal: %.2Lf\n", sum);
        }

        if (ShoppingCart == 7)
        {
            CheckOut = false;
        }

        if (ShoppingCart == 8)
        {
            CheckOut = false;
            printf("Session Closed, thank you for considering Spoon Sports!\n");
        }
    }
}

char ShippingInformation(void)
{
    printf("\nYour Shipping Information Has Been Directly Copied From Your Settings\n");
    printf("\nEmail Address: Doug_Dimmsdale_Dimmadome @ gmail.com\n");
    printf("\nShipping Address: 235 W Santa Clara St, Ventura, CA 93001\n");
    printf("\nPhone Number: (805) 643 - 6074\n");

    return 0;
}

int CreditCard(void)
{
    printf("\nPlease Enter Your Credit Card Information Below: \n");

    int CreditCardNum;
    scanf("%d\n", &CreditCardNum);

    for (int i = 0, j = 10, k = 10; i < strlen(CreditCardNum); i++, j * 10, k * 10)
    {

        int digit = ((CreditCardNum / j) % k);
        printf("%d\n", digit);
    }
}
