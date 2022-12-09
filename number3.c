#include <stdio.h>
#include <math.h>

int main ()
{
	int even,odd,number,result;
	
	printf("Enter the number");
	scanf("%d",&number);
	
	result=(number%2);
	
	if(result==1){
		printf("number is odd %d",number);
	}
	
	else {
		printf("number is even %d",number);
	}
	 return 0;
}
