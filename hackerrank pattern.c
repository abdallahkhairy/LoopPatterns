#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, digit;
  scanf("%d", &n);
  // Complete the code to print the pattern.
  digit = n;
  for (int fl = 0; fl < 2 * n - 1; fl++) {
    for (int sl = 0; sl < 2 * n - 1; sl++) {
      if (fl == 0 || fl == 2 * n - 2) {
        printf("%i ", n);
      } else {
        if (sl <= fl &&
            fl < n)  // decrease Number when  rows_index is less than or equal
                     // diagonal element in the upper side
        {
          digit--;
        } else if (sl > (2 * n - 2 - fl) &&
                   fl < n)  // increase Number when rows_index is bigger than
                            // diagonal element in the upper side
        {
          digit++;
        } else if (sl <= (2 * n - 2 - fl) &&
                   fl >= n)  // decrease Number when rows_index is less than or
                             // equal diagonal element in the lower side
        {
          digit--;
        } else if (sl > fl &&
                   fl >= n)  // increase Number when rows_index bigger than
                             // diagonal element in the lower side
        {
          digit++;
        } else {
        }
        printf("%i ", digit);
      }
    }
    digit = n + 1;
    printf("\n");
  }
  return 0;
}