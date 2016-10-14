
#include <stdio.h>

int main() 
{
	int n; 
	printf("Unesi n: ");
	scanf(" %d", &n);
	int sum = 0; 
	int i;
	for (i = 0; i<=n; i++) sum += i;
	printf("Suma je: %d\n", sum);
	return 0;
}
