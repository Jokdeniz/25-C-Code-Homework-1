#include <stdio.h>


int main ()
{
    int number;

    printf("Enter a number");
    scanf("%d",&number);

    for(number;number>0;number--)
    {
        printf("%d\n",number);

    }

    return 0;
}