
#include <stdio.h>

int main() 
{
	int n,q; 
	printf("Unesite n i q: ");
	scanf(" %d %d", &n, &q);
	int i = 2; 
	while (i<=n) 
	{
		if (i % q == 0) printf("%d ", i);
		i++;
	}
	printf("\n");
	return 0;
}
