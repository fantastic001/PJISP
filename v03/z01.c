
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
	for (i=0; i<n; i++) s += a[i][n-i-1];
	printf("%d\n", s);
	return 0;
}
