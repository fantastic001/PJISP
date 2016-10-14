
#include <stdio.h>


int main() 
{
	printf("Unesite koordinate tacaka paralelograma: ");
	float x1,y1,x2,y2,x3,y3;
	scanf(" %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
	float ax,ay,bx,by;
	ax = x2 - x1; 
	ay = y2 - y1;
	bx = x3 - x1; 
	by = y3 - y1;
	float p = ax*by - ay*bx;
	p = p<0 ? -p : p;
	printf("Povrsina je: %f\n", p);
	return 0;
}
