/******************************************************************************

palindrome half pyramid

*******************************************************************************/
#include <stdio.h>
unsigned counter1 = 0;
unsigned counter2 = 0;
int main ()
{
  int rows = 5; // input
  int l_count =0;
  int l2_count =0;
  int half_pyramid_value=0;
  
  for (counter1 = 0; counter1 < rows*2; counter1+=2)
    {
      for (counter2=0 ; counter2 <= counter1 ; counter2++ ){
          
          if(counter2<(counter1/2)+1)
          {
              
              printf(" %c",counter2+1+64);
              half_pyramid_value =counter2+1+64;
          }
          else
          {
              printf(" %c",half_pyramid_value-l2_count-1);
              l2_count++;
          }
    

          l_count++;
      }
        l2_count=0;
        l_count =0;
      printf("\n");
    }
    printf("%d %d", l_count, l2_count);

  return 0;
}