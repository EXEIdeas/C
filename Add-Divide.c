#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main ()
{
  /* variable definition: */
  int a, b;
  int c;
  float f;
 
  /* actual initialization */
  a = 10;
  b = 20;
  
  c = a + b;
  printf("value of c : %d \n", c);

  f = 70.0/3.0;
  printf("value of f : %f \n", f);
 
  system("pause"); /* Press any key to continue . . . _   ***   If not add this then profram will close automatically */
  return 0;
}
