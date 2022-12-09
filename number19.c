#include <stdio.h>
#include <math.h>


int main ()
{
    int number,i,result;
    printf("Enter a number");
    scanf("%d",&number);

    for(i=1;i<=10;i++)
    {
        result=(i*number);
        printf("%d\n",result);

    }
    return 0;
}