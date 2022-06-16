#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

long double CheckOutTotal(void);

long double zero;
long double zero_one;
long double zero_two;
long double zero_three;
long double zero_four;
long double zero_five;

int quantity;
int quantity_one;
int quantity_two;
int quantity_three;
int quantity_four;
int quantity_five;

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

    return 0;
}

long double CheckOutTotal(void)
{

    bool CheckOut = true;
    while (CheckOut == true)

    {

        printf("\nPlease Enter the Product(s) You'd Like To Purchase BY I.D. # in the Space Provided Below (Or 7 to End Session): \n");
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
            }
            else if (quantity < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 1)
        {

            printf("\nSelect Quantity of Spoon Aero Bumper Front, FRP - Civic FK8\n");

            scanf("%d", &quantity_one);

            printf("\n%d Spoon Aero Bumper Front, FRP - Civic FK8 - Added to Cart !\n", quantity_one);

            if (quantity_one > 0)
            {
                zero_one = quantity_one * 4110.00 + zero_one;
                printf("%.2Lf\n", zero_one);
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
                zero_two = quantity_two * 4110.00 + zero_two;
                printf("%.2Lf\n", zero_two);
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
                zero_three = quantity_three * 4110.00 + zero_three;
                printf("%.2Lf\n", zero_three);
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
                zero_four = quantity_four * 4110.00 + zero_four;
                printf("%.2Lf\n", zero_four);
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
                zero_five = quantity_five * 4110.00 + zero_five;
                printf("%.2Lf\n", zero_five);
            }
            else if (quantity_five < 0)
            {
                printf("Sorry, please enter a valid number of units you'd like\n");
            }
        }

        if (ShoppingCart == 6)
        {
            printf("Shopping Cart: \n");

            printf("\n%d Spoon 3DGT Wing (Carbon) - Civic FK8\n", quantity);
            printf("\n%d Spoon Aero Bumper Front, FRP - Civic FK8\n", quantity_one);
            printf("\n%d Spoon Aero Bumper Rear, FRP - Civic FK8\n", quantity_two);
            printf("\n%d Spoon 3DGT Wing (Carbon) - S2000 AP1/2\n", quantity_three);
            printf("\n%d Spoon Aero Bumper [Front] - S2000 AP1/2\n", quantity_four);
            printf("\n%d Spoon Aero Bumper [Rear] - S2000 AP1/2\n", quantity_five);
        }

        if (ShoppingCart == 7)
        {
            long double sum = zero + zero_one + zero_two + zero_three + zero_four + zero_five;
            printf("Your total is %.2Lf\n", sum);
            printf("Would you like to proceed with the checkout process?: \n");
        }

        if (ShoppingCart == 8)
        {
            CheckOut = false;
            printf("Session Closed, thank you for considering Spoon Sports.\n");
        }
    }

    // return total;

    // ** LUHNS ALGORITHM **

    // Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
    // Add the sum to the sum of the digits that weren’t multiplied by 2.
    // If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
}
