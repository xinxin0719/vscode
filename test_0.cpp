#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, position;
    cin >> n;
    vector<int> square(n * n);
    square[n / 2] = 1;
    position = n / 2;
    for (int i = 2; i <= n * n; i++) {
        if (position / n == 0 && position % n != n - 1) {
            square[position + 1 + n * (n - position / n - 1)] = i;
            position = position + 1 + n * (n - position / n - 1);
        } else if (position / n != 0 && position % n == n - 1) {
            square[position - n - n + 1] = i;
            position = position - n - n + 1;
        } else if (position / n == 0 && position % n == n - 1) {
            square[position + n] = i;
            position = position + n;
        } else if (!(position / n == 0 && position % n == n - 1)) {
            if (square[position - n + 1] == 0) {
                square[position - n + 1] = i;
                position = position - n + 1;
            } else {
                square[position + n] = i;
                position = position + n;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[j + i * n] << ' ';
        }
        cout << '\n';
    }
    cout << endl;
}