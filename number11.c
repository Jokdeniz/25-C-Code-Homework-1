#include <stdio.h>
#include<math.h>


int main ()
{
	int counter,sum,product,number;
	
	counter=1;
	sum=0;
	product=1;
	
	for(counter; counter<=10; counter++)
	{
		printf("Enter a number");
		scanf("%d",&number);
		sum=(sum+number);
		product=(product*number);
	}
	
	printf("sum of numbers = %d\n",sum);
	printf("product of numbers = %d\n",product);
	
	return 0;
}

