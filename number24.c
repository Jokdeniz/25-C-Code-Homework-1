#include <stdio.h>
#include <math.h>

int main ()
{
    int number,digit,num0,num1,num2,num3,num4,num5,num6,num7,num8,num9;

    printf("Enter a number");
    scanf("%d",&number);

    num0=0;
    num1=0;
    num2=0;
    num3=0;
    num4=0;
    num5=0;
    num6=0;
    num7=0;
    num8=0;
    num9=0;
    while(number>0)
    {
        digit=number%10;
        number=number/10;

        if(digit==0)
        {
            num0=num0+1;
        }

        else if(digit==1)
        {
            num1=num1+1;
        }

        else if(digit==2)
        {
            num2=num2+1;
        }

        else if(digit==3)
        {
            num3=num3+1;
        }

        else if(digit==4)
        {
            num4=num4+1;
        }

        else if(digit==5)
        {
            num5=num5+1;
        }

        else if(digit==6)
        {
            num6=num6+1;
        }

        else if(digit==7)
        {
            num7=num7+1;
        }

        else if(digit==8)
        {
            num8=num8+1;
        }

        else 
        {
            num9=num9+1;
        }

       
    }

    printf("Frequency of 0 = %d\n",num0);
    printf("Frequency of 1 = %d\n",num1);
    printf("Frequency of 2 = %d\n",num2);
    printf("Frequency of 3 = %d\n",num3);
    printf("Frequency of 4 = %d\n",num4);
    printf("Frequency of 5 = %d\n",num5);
    printf("Frequency of 6 = %d\n",num6);
    printf("Frequency of 7 = %d\n",num7);
    printf("Frequency of 8 = %d\n",num8);
    printf("Frequency of 9 = %d\n",num9);

    return 0;

    
}   