#include<stdio.h>
#include<math.h>

int main ()
{

    int number,count,value,multiplier,result,value2,firstNumber,swapNumber;

    printf("Enter a number");
    scanf("%d",&number);

    count=0;
    firstNumber=number;

    while(number>0)
    {
        number=number/10;
        count=count+1;
    }
    
 
    value= firstNumber % 10;
    

    multiplier=count-1;
    result=pow(10,multiplier);
    value2=(firstNumber/result);
    

    swapNumber=firstNumber-(value2*result)+(value*result);
    swapNumber=swapNumber-value+value2;

    printf("Swap number= %d",swapNumber);
    return 0;
    
}