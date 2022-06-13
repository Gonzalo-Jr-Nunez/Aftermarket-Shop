#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    // Some spaces between for readability purposes
    printf("\n");

    printf("                    WELCOME TO SPOON SPORTS USA\n");

    printf("\n");

    printf("PLease Enter The Spoon Product(s) You'd Like to Purchase by I.D. # Below:\n");

    printf("\n");

    // A two dimensional array with all of the products available for sale
    char products[6][100];

    strcpy(products[0], "ID #A0: Spoon 3DGT Wing (Carbon)       -     Civic FK8   -   $4,110.00");
    strcpy(products[1], "ID #B1: Spoon Aero Bumper Front, FRP   -     Civic FK8   -   $3,200.00");
    strcpy(products[2], "ID #C2: Spoon Aero Bumper Rear, FRP    -     Civic FK8   -   $3,025.00");
    strcpy(products[3], "ID #D3: Spoon 3DGT Wing (Carbon)       -    S2000 AP1/2  -   $3,285.00");
    strcpy(products[4], "ID #E4: Spoon Aero Bumper [Front]      -    S2000 AP1/2  -   $2,290.00");
    strcpy(products[5], "ID #F5: Spoon Aero Bumper [Rear]       -    S2000 AP1/2  -   $1,945.00");

    // Printing the list of products available for sale
    for (int i = 0; i < 6; i++)
    {
        printf("%s\n\n", products[i]);
    }

    printf("\n");

    printf("SHOPPING CART:\n ");

    return 0;
}
