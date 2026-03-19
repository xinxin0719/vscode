#include<stdio.h>

int main(){
    for (int i = 0; i < 0XF; i++){
        for (int j = 0; j < i + 1; j++){
            printf("%Xx%X=%2X\t", j + 1, i + 1, (j + 1) * (i + 1));
        }
        printf("\n");
    }
}