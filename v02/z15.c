
#include <stdio.h>

int main() 
{
	int n; 
	float a[20];
	printf("Unesi n: ");
	scanf(" %d", &n);
	printf("Unesi elemente niza: ");
	int i; 
	for (i=0; i<n; i++) scanf(" %f", &a[i]);
	float max = a[0]; 
	for (i=0; i<n; i++) 
	{
		if (a[i] > max) max = a[i];
	}
	printf("Maksimalan element je %f\n", max);
	return 0;
}
