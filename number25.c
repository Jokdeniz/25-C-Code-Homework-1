#include <stdio.h>
#include <math.h>

int main ()
{
    int x,y,result;

    printf("Enter the first number");
    scanf("%d",&x);
    printf("Enter the second number");
    scanf("%d",&y);

    while (y !=0)
    {
        result=x%y;

        x=y;

        y=result;
        
    }

    printf("Higgest Comman Factor =  %d",x);

    return 0;
    


}