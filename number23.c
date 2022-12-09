#include <stdio.h>
#include <math.h>

int main ()
{
    int number,firstNumber,sum,result;

    printf("Enter a number");
    scanf("%d",&number);

    sum=0;
    firstNumber=number;

    while(number>0)
    {
        result=number%10;
        sum=(sum*10)+result;
        number=number/10;
    }

    if(firstNumber==sum)
    {
        printf("This number is a Palindrome Number");
    }

    else{
        printf("This number is NOT a Palindrome Number");
    }

    return 0;


}