#include <stdio.h>
#include <math.h>

int main ()
{
	int radius,area;
	
	printf("Enter the value of radius");
	scanf("%d",&radius);
	
	area=(M_PI*radius*radius);
	
	printf("area= %d\n",area);
	
	return 0;
	
}
