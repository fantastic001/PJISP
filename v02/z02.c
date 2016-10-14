
#include <stdio.h>

int main() 
{
	int a,b; 
	printf("Unesite dva broja: ");
	scanf(" %d %d", &a, &b);
	int c;
	if (a<b) c = a;
	else c = b;
	printf("Manja vrednost je %d\n", c);
	return 0;
}
