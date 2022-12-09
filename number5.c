#include <stdio.h>
#include <math.h>

int main ()
{
	int celsuis,fahr,result;
	
	printf("Enter the value of Fahrenheight");
	scanf("%d",&fahr);
	
	celsuis=((fahr-32)*5/9);
	
	printf("Value of Celsuis= %d",celsuis);
	
	return 0;
}
