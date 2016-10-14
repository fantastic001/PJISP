
#include <stdio.h>

int main() 
{
	int n; 
	printf("Unesi n: ");
	scanf(" %d", &n); 
	int i; 
	for (i=2; i<n; i++) 
	{
		if (n % i == 0) 
		{
			printf("Broj nije prost\n");
			return 0; 
		}
	}
	printf("Broj je prost\n");
	return 0;
}
