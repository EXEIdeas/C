/******************************
Variance
Programming Language (CS-509)
Teacher: Badar Sami (BS)
Written By: Muhammad Hassan
******************************/
#include <stdio.h>

float main()
{
    int n;
    int x;
    printf ("Enter The Total No Count: ");
	scanf ("%d", & n);
	int c = 0;
	float sx = 0;
	int sxx = 0;
	do
    {
        c = c + 1;
        printf ("Enter Your %d No: ", c);
        scanf ("%d", & x);
        sx = sx + x;
        sxx = sxx + (x * x);
    }
    while(c < n);
    float v = ((n * sxx) - (sx * sx) ) / (n * n);
    printf ("Your Variance Is: %.2f\n", v);
    return 0;
}
