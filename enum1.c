#include<stdio.h>

int main()
{
    enum colors { RED, GREEN, BLUE };
    enum colors favorite_color;

    favorite_color = GREEN;

    if (favorite_color == RED) {
        printf("Your favorite color is Red.\n");
    } else if (favorite_color == GREEN) {
        printf("Your favorite color is Green.\n");
    } else if (favorite_color == BLUE) {
        printf("Your favorite color is Blue.\n");
    } else {
        printf("Unknown color.\n");
    }

    return 0;
}