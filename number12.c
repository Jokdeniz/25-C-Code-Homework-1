#include <stdio.h>
#include <math.h>

int main()
{
	int low,high,divisor,number;
	
	printf("Enter the value of low");
	scanf("%d",&low);
	
	printf("Enter the value of high");
	scanf("%d",&high);
	
	printf("Enter the divisor");
	scanf("%d",&divisor);
	
	for(number=low;number<=high;number+=divisor)
	{
		printf("%d\n",number);
	}
	
	return 0;
}
