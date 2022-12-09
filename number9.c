#include <stdio.h>
#include <math.h>


int main ()
{
	int low,high,divisor,number;
	
	printf("Enter the value of low");
	scanf("%d",&low);
	
	printf("Enter the value of high");
	scanf("%d",&high);
	
	printf("Enter value of divisor");
	scanf("%d",&divisor);
	
	for(number=low;number<=high;number++)
	{
		if(number%divisor==0)
		{
			printf("%d\n",number);
		}
	}
	
	return 0;
}
