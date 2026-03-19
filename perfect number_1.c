#include<stdio.h>
#include<math.h>


int main()
{
    int perfect_number, number = 0;
    for(perfect_number = 1; perfect_number < 100000000; perfect_number++)
    {
        for(int i = 1; i < perfect_number; i++)
        {
            if(perfect_number % i == 0)
            {
                number += 1;
            }
        }
        int arr[number];
        number = -1;
        for(int i = 1; i < perfect_number; i++)
        {
            if(perfect_number % i == 0)
            {
                number += 1;
                arr[number] = i;
            }
        }
        int sum = 0;
        for(int i = 0; i < number + 1; i++)
        {
            sum += arr[i];
        }
        printf("\r\033[K%d", perfect_number);
        if (perfect_number == sum)
        {
            printf("\r\033[K%d\n", perfect_number);
        }
    }
}