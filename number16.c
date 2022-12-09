#include <stdio.h>
#include <math.h>


int main ()
{
    int low,sum;

    low=1000;
    sum=0;

    for(low;low<=2000;low++)
    {
        if(low%2==0)
        {
            printf("%d\n",low);
            sum+=low;
        }
    }
    printf("Total Sum = %d",sum);

    return 0;

}