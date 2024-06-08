#include <stdio.h>

#define LOWER 0   /*lowerlimitoftable*/
#define UPPER 300 /*upperlimit*/
#define STEP 20   /*stepsize*/

/*printFahrenheit-Celsiustable*/
int main() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  return 0;
}