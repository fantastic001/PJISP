
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
	int mini=0, maxi=0, minj=0, maxj=0;
	for (i=0; i<n; i++) 
	{
		for (j=0; j<n; j++) 
		{
			if (a[i][j] < a[mini][minj]) 
			{
				mini = i; 
				minj = j; 
			}
			if (a[i][j] > a[maxi][maxj]) 
			{
				maxi = i; 
				maxj = j;
			}
		}
	}
	int k; 
	for (k=0; k<n; k++) 
	{
		int tmp = a[maxi][k];
		a[maxi][k] = a[mini][k];
		a[mini][k] = tmp;
	}
	for (i=0; i<n; i++) 
	{
		for (j=0; j<n; j++) 
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
