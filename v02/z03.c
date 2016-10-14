
#include <stdio.h>
#include <math.h> 
int main() 
{
	float x; 
	printf("Unesi x: ");
	scanf(" %f", &x);
	float y; 
	if (x < 0) y = -7;
	else if (0 <= x && x < 1) y = pow(x, 1.0/4.0) + 4.0; 
	else if (1 <= x && x < 13) y = 2*sqrt(x) - 5;
	else y = x*x / 9;
	printf("f(x) = %f\n", y);
	return 0;
}
