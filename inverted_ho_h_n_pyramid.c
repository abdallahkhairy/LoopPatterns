/******************************************************************************

Inverted Holllow numbered half pyramid

*******************************************************************************/
/*pyramid*/
/*if((counter1 != 0)&&(counter1 != rows-1)&&(counter2 != 0)&&(counter2 != counter1))*/
#include <stdio.h>
unsigned counter1 = 0;
unsigned counter2 = 0;
int main ()
{
  int rows = 5; // input
  int l_count =0;
  int l2_count =0;
  int half_pyramid_value=0;
  
  for (counter1 = 0; counter1 < rows; counter1++)
    {
      for (counter2=0 ; counter2 <rows-counter1 ; counter2++ ){
          if((counter1 != 0)&&(counter1 != rows-1)&&(counter2 != 0)&&(counter2 != rows-counter1-1))
          {
             printf("  "); 
          }
          else
          {
          printf(" %d",counter1+1+counter2); /*remove counter1 if you want the row start from 1  */
          }
      }
      printf("\n");
    }
   // printf("%d %d", l_count, l2_count);

  return 0;
}