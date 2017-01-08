#include <stdio.h>
#include <math.h>

/******************************
Trapezoidal Rule
Programming Language (CS-509)
Teacher: Badar Sami (BS)
Written By: Muhammad Hassan
******************************/

int main()
{
    int i;
	float a, b, h, n, x, fa, fb, mid, result;
	printf ("\n Enter Upper Limit: ");
	scanf ("%f", & b);
	printf ("\n Enter Lower Limit: ");
	scanf ("%f", & a);
	printf ("\n Enter Interval: ");
	scanf ("%f", & n);
	printf ("\n Enter Constant with X where X have 0 power: ");
	scanf ("%f", & x);
	h = (b - a) / n;
	fa = x * pow(a, 0);
	fb = x * pow(b, 0);
	for (i=1; i<n; i++){
		mid += x * pow((a + (i*h)), 0);
	}
	result = (h / 2) * (fa + (2 * mid) + fb);
	printf ("\n Awnser is %f" , result);
	printf ("\n");
	system("pause"); /* Press any key to continue . . . _   ***   If not add this then program will close automatically */
}
