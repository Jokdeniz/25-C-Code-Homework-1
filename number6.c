#include <stdio.h>
#include <math.h>

int main ()
{
	int feet,cm;
	
	printf("Enter the value of feet");
	scanf("%d",&feet);
	
	cm=((feet*3048)/100);
	
	printf("cm = %d",cm);
	
	return 0;
	
}
