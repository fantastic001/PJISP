
#include <stdio.h>

int main() 
{

	int res = 1; 
	int n; 
	do 
	{
		printf("Unesi n: "); 
		scanf(" %d", &n);
	} while (n<=0);
	int i; 
	for (i=1; i<=n; i++) res *= i; 
	printf("Resenje je %d\n", res);
	return 0;
}
