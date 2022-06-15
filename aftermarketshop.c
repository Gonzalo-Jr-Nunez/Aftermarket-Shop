#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int CheckOutTotal(void);

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

int CheckOutTotal(void)
{

    bool CheckOut = true;
    while (CheckOut == true)

    {
        printf(" \nPlease Enter the Product(s) You'd Like To Purchase BY I.D. # in the Space Provided Below: \n");

        int ShoppingCart;
        scanf("%d", &ShoppingCart);

        if (ShoppingCart == 0)
        {
            int quantity;

            printf("\nSelect Quantity of Spoon 3DGT Wing (Carbon) - Civic FK8\n");

            scanf("%d", &quantity);

            printf("\n%d Spoon 3DGT Wing (Carbon) - Civic FK8 - Added to Cart !\n", quantity);

            if (quantity >= 1 || quantity <= 6)
            {
                double zero;
                zero = quantity * 4110.00 + zero;
                printf("%.2lf", zero);
            }
        }

        if (ShoppingCart == 1)
        {
            printf("Spoon Aero Bumper Front, FRP    -   Civic FK8   -  Added to Cart !\n");
        }

        if (ShoppingCart == 2)
        {
            printf("Spoon Aero Bumper Rear, FRP    -     Civic FK8   -   Added to Cart !\n");
        }

        if (ShoppingCart == 3)
        {
            printf("Spoon 3DGT Wing (Carbon)       -    S2000 AP1/2  -   Added to Cart !\n");
        }

        if (ShoppingCart == 4)
        {
            printf("Spoon Aero Bumper [Front]      -    S2000 AP1/2  -   Added to Cart !\n");
        }

        if (ShoppingCart == 5)
        {
            printf("Spoon Aero Bumper [Rear]       -    S2000 AP1/2  -   Added to Cart !\n");
        }

        if (ShoppingCart == 6)
        {
            CheckOut = false;
            exit(0);
        }

        if (ShoppingCart > 7)
        {
            printf("Please Type in a Valid Product I.D. # or Use 6 To Quit.");
        }
    }

    // return total;

    // ** LUHNS ALGORITHM **

    // Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
    // Add the sum to the sum of the digits that weren’t multiplied by 2.
    // If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
}
