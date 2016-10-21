
#include <stdio.h>

int abs(int a) 
{
	if (a<0) return -a;
	return a;
}

int main() 
{
	int a[20];
	int n;
	int s = 0; 
	scanf(" %d", &n);
	int i;
	for (i=0; i<n; i++) scanf(" %d", &a[i]);

	for (i=0; i<n; i++) s += a[i];
	s /= n;
	int min = a[0];
	int index = 0;
	for (i=0; i<n; i++) 
	{
		if (abs(a[i] - s) < min) 
		{
			index = i; 
			min = abs(a[i] - s);
		}
	}
	printf("%d\n", a[index]);
	return 0;
}
