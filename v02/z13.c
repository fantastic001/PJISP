

/*
Program izracunava S = 1*2 + 2*3*4 + ... + (n+0)*(n+1)*...*(n+n)
*/

#include <stdio.h>

int main() 
{
	printf("Unesi n: "); 
	int n; 
	scanf(" %d", &n);
	int s = 0; 
	int i; 
	for (i=1; i<=n; i++) 
	{
		int a = 1; 
		int j;
		for (j=0; j<=i; j++) 
		{
			a *= (i+j);
		}
		s += a; 
	}
	printf("S = %d\n", s);
	return 0;
}
