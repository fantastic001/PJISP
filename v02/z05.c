
#include <stdio.h>

int main() 
{
	float a,b; 
	printf("Unesite dva broja: ");
	scanf(" %f %f", &a, &b);
	if (a != 0) 
	{
		printf("Resenje je: %f\n", -b/a);
	}
	else 
	{
		if (b == 0) printf("Ima beskonacno mnogo resenja\n");
		else printf("Nema resenja\n");
	}
	return 0;
}
