#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    printf("\n");

    printf("WELCOME TO SPOON SPORTS USA\n");

    printf("\n");

    printf("PLease Enter The Spoon Product(s) You'd Like to Purchase by I.D. in the Space Provided Below:\n");

    printf("\n");

    char products[6][100];

    strcpy(products[0], "ID #1: Spoon 3DGT Wing (Carbon) - Civic FK8 - $4,110.00");
    strcpy(products[1], "ID #2: Spoon Aero Bumper Front, FRP - Civic FK8 - $3,200.00");
    strcpy(products[2], "ID #3: Spoon Aero Bumper Rear, FRP - Civic FK8 - $3,025.00");
    strcpy(products[3], "ID #4: Spoon 3DGT Wing (Carbon) - S2000 AP1/2 - $3,285.00");
    strcpy(products[4], "ID #5: Spoon Aero Bumper [Front] - S2000 AP1/2 - $2,290.00");
    strcpy(products[5], "ID #6: Spoon Aero Bumper [Rear] - S2000 AP1/2  - $1,945.00");

    for (int i = 0; i < 6; i++)
    {
        printf("%s\n\n", products[i]);
    }

    int x;
    printf("Enter Product I.D. : ");
    scanf("%d", &x);
    printf("%d\n", x);

    return 0;
}
