#include <stdio.h>
#include <math.h>

int main ()
{
    int bin[10];
    int number;
    int result;
    int ctr = 0;

    printf("Enter a number");
    scanf("%d",&number);

    while(number>0)
    {
        result=number % 2;
        bin[ctr] = result;
        ctr++;
        number=number/2;
    }


    for (int i = ctr-1;i>=0;i--) {
         printf("%d",bin[i]);
    }

    return 0;
}