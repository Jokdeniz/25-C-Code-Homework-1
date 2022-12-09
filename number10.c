#include <stdio.h>
#include <math.h>


int main ()
{
	int A,B,C,biggest;
	
	printf("Enter the A =");
	scanf("%d",&A);
	
	printf("Enter the B =");
	scanf("%d",&B);
	
	printf("Enter the C=");
	scanf("%d",&C);
	
	biggest=A;
	
	if(B>biggest)
	{
		biggest=B;
	}
	if(C>biggest)
	{
		biggest=C;
	}
	
	printf("The biggest number = %d\n",biggest);
	
	return 0;
}
