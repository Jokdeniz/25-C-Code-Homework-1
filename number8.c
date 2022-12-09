#include <stdio.h>

#include <math.h>

int main ()
{
	int low,high,sum;
	
	printf("Enter the value of low");
	scanf("%d",&low);
	printf("Enter the value of high");
	scanf("%d",&high);
	sum=0;
	
	for(low;low<=high;low++)
	{
		sum=(sum+low);
	}
	printf("sum= %d\n",sum);
	
	return 0;
}
