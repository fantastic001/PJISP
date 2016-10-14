
#include <stdio.h>

int main() 
{
	printf("Unesite dva broja: ");
	int a,b; 
	scanf(" %d %d", &a, &b);
	printf("Izaberite operaciju: \n");
	printf("1: mnozenje\n");
	printf("2: deljenje\n");
	int op; 
	scanf(" %d", &op);
	if (op == 1) 
	{
		int res = 0; 
		int i; 
		for (i=0; i<b; i++) res += a;
		printf("Resenje je %d\n", res);
	}
	else if (op == 2) 
	{
		if (b == 0) 
		{
			printf("Deljenje nulom nije dozvoljeno\n");
			return 1;
		}
		int c = 0; 
		while (a>0) 
		{
			a -= b; 
			c++; 
		}
		printf("Resenje je %d\n", c);
	}
	else 
	{
		printf("Pogresan broj\n");
		return 1;
	}
	return 0;
}
