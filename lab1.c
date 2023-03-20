#include <stdio.h>
#include <math.h>
#define N 8

int main ()
{
    float arr[N],sum,arithmeticMean;
    int a;

    sum=0;
    arithmeticMean=0;
    for(a=0 ; a<N ; a++)
    {
        printf("%d. number = ",a+1);
        scanf("%f",&arr[a]);
        sum+=arr[a];
    }
    arithmeticMean=sum/N;

    printf("ARITMETIC MEAN = %.3f\n",arithmeticMean);

    return 0;

}