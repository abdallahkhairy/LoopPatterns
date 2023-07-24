/******************************************************************************

Row ordered pattern of Half pyramid
*******************************************************************************/

#include <stdio.h>
unsigned counter1 = 0;
unsigned counter2 = 0;
int main ()
{
  int rows = 9; // input
  int l_count =0;
  int l2_count =0;
  
  //int columns = 5;
  for (counter1 = 0; counter1 < rows; counter1++)
    {
      for (counter2=0 ; counter2 <=counter1 ; counter2++ ){
          printf("%d", counter2+1);
      }
      printf("\n");
    }
    //printf("%d %d", l_count, l2_count);
  return 0;
}
