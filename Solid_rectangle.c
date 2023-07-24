/******************************************************************************

Solid Rectangle

*******************************************************************************/
#include <stdio.h>
unsigned counter1=0;
unsigned counter2=0;
int main() {
    // Write C code here
    int rows = 5;
    int coulumns = 10;
    for(counter1 =0 ; counter1<rows; counter1++)
    {
        for(counter2 =0 ; counter2<coulumns; counter2++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}