#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, temp;
    int arr[2][7] = {{0},{1, 2, 3, 4, 5, 6, 7}};
    for (int i = 0; i < 7; i++) {
        cin >> x >> y;
        if (x + y > 8) {
            arr[0][i] = x + y - 8;
        }
    }
    for (int j = 0; j < 2100000000; j++) {
        continue;
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (arr[0][j] < arr[0][j + 1]) {
                temp = arr[0][j];
                arr[0][j] = arr[0][j + 1];
                arr[0][j + 1] = temp;
                temp = arr[1][j];
                arr[1][j] = arr[1][j + 1];
                arr[1][j + 1] = temp;
            }
        }
    }
    if (arr[0][0] != 0) {
        cout << arr[1][0];
    }
    return 0;
}