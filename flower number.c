#include<stdio.h>
#include<math.h>

int main()
{
    int number, first, second, third;
    for(number = 100; number < 999; number++)
    {
        first  = number / 100;
        second = number / 10 % 10;
        third  = number % 10;
        if(first * first * first + second * second * second + third * third * third == number)
        {
            printf("%d\n", number);
        }
    }
}