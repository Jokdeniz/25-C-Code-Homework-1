#include <stdio.h>
#include <math.h>


int main ()
{
    int count,number;
    

    printf("Enter a number");
    scanf("%d",&number);

    count=0;
    while(number>0)
     {
        number=number/10;
        count=count+1;
    }
   

    printf("Count of number = %d",count);

    return 0;


    
}