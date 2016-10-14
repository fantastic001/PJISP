
#include <stdio.h>
#include <math.h>

int main() 
{
	int a,b,c;
	printf("Unesi tri broja: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Aritmeticka sredina: %f\n", ((float) a + b + c) / 3.0);
	printf("Geometrijska sredina: %f\n", pow((float)a*b*c, 1.0/3));
	printf("Harmonijska sredina: %f\n", 3.0 / (1.0/a + 1.0/b + 1.0/c));
	printf("Kvadratna sredina je: %f\n", sqrt((a*a + b*b + c*c) / 3.0));
	return 0; 
}
