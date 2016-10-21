
#include <stdio.h> 

int main() 
{
	int n; 
	scanf(" %d", &n); 
	int i,j; 
	int a[256][256];
	for (i=0; i<n; i++) 
	{
		for (j=0; j<n; j++) 
		{
			scanf(" %d", &a[i][j]);
		}
	}
	int s = 0; 
	for (i=0; i<n; i++) 
	{
		for (j=0; j<i; j++) 
		{
			s += a[i][j]; 
		}
	}
	printf("%d\n", s);
	return 0;
}
