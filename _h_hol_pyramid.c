/******************************************************************************

row ordered pattern of hollow half pyramid

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
      for (counter2=0 ; counter2 <= counter1 ; counter2++ ){
          if((counter1 != 0)&&(counter1 != rows-1)&&(counter2 != 0)&&(counter2 != counter1))
          printf("  ");
          else
          printf("%i ", counter2+1);/*add counter1 if you want the row start from last value in the previous rows  */
          
      }
      printf("\n");
    }
   // printf("%d %d", l_count, l2_count);
  return 0;
}