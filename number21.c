#include<stdio.h>
#include<math.h>

int main ()
{

    int number,count,value,multiplier,result,value2,firstNumber;

    printf("Enter a number");
    scanf("%d",&number);

    count=0;
    firstNumber=number;

    while(number>0)
    {
        number=number/10;
        count=count+1;
    }
    printf("Count of number= %d\n",count);
 
    value= firstNumber % 10;
    printf("Last digit of number= %d\n",value);

    multiplier=count-1;
    result=pow(10,multiplier);
    value2=(firstNumber/result);
    printf("First digit of number= %d\n",value2);



    return 0;
    
}