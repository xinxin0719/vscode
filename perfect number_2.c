#include<stdio.h>
#include<math.h>


int main()
{
    int perfect_number, sum = 0;
    for(perfect_number = 1; perfect_number < pow(2, 32) - 1; perfect_number++)
    {
        sum = 0;
        for(int i = 1; i < perfect_number; i++)
        {
            if(perfect_number % i == 0)
            {
                sum += i;
            }
        }
        printf("\r\033[K%d", perfect_number);
        if (perfect_number == sum)
        {
            printf("\r\033[K%d\n", perfect_number);
        }
    }
}