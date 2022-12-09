#include <stdio.h>
#include <math.h>


int main ()
{
    int number,i;
    float result,sum;

    printf("Enter a number");
    scanf("%d",&number);

    sum=0;

    for(i=2;i<=number;i=i+2)
    {
        result=( (float) 1 / i);
        sum=(sum+result);
       

        
    }

    printf("Total Sum= %f",sum);


    return 0;
}