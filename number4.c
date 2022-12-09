#include <stdio.h>
#include <math.h>

int main ()
{
	int temp;
	
	printf("Enter the value of temperature");
	scanf("%d",&temp);
	
	if(temp>0){
		printf("The temperature is above 0 %d",temp);
	}
	
	else {
		printf("The temperature is below 0 %d",temp);
	}
	
	return 0;
}
