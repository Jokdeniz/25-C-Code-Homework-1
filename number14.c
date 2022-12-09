#include <stdio.h>
#include <math.h>


int main ()
{
    int number,factorial,i;
    printf("Enter a number");
    scanf("%d",&number);
    factorial=1;

    for(i=1;i<=number;i++)
    {
        factorial=(factorial*i);

    }

    printf("factorial= %d",factorial);

    return 0;
}   




