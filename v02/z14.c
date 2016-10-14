
#include <stdio.h>

int main() 
{
	int a[30]; 
	int n,b; 
	printf("Unesi n: ");
	scanf(" %d", &n);
	printf("Unesi elemente niza: ");
	int i; 
	for (i=0; i<n; i++) scanf("%d", &a[i]);
	printf("Unesi broj br: ");
	scanf(" %d", &b); 
	int c = 0; 
	for (i=0; i<n; i++) 
	{
		if (a[i] == b) c++; 
	}
	printf("Broj ponavljivanja broja %d u nizu je: %d\n", b, c);
	return 0;
}
