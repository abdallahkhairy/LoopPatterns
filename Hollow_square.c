/******************************************************************************

Hollow Square

*******************************************************************************/
#include <stdio.h>
unsigned counter1 = 0;
unsigned counter2 = 0;
int main ()
{
  int rows = 10;
  int columns = 9;
  for (counter1 = 0; counter1 < rows; counter1++)
    {
      for (counter2 = 0; counter2 < columns; counter2++)
	{
	  if ((counter1 != 0) && (counter1 != rows - 1) && (counter2 != 0) && (counter2 != columns - 1))
	    {
	      
		  printf ("  ");
	    }
	  else
	    {
	      printf ("* ");
	    }
	}
      printf ("\n");
    }

  return 0;
}
