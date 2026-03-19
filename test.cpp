#include <iostream>
#include <vector>
using namespace std;

vector<int> factorial(int x, vector<int> arr) {
    int in;
    for (int i = 1; i <= x; i++) {
        for (long unsigned int j = 0; j < arr.size();) {
            arr[j] *= i;
            j++;
        }
        for (long unsigned int j = 0; j < arr.size();) {
            if (arr[j] >= 10) {
                in = arr[j] / 10;
                arr[j] -= 10 * in;;
                if (j + 1 == arr.size()) {
                    arr.push_back(in);
                    j++;
                } else {
                    arr[j + 1] += in;
                }
            }
            j++;
        }
        next:
        if (arr[arr.size() - 1] >= 10) {
            in = arr[arr.size() - 1] / 10;
            arr[arr.size() - 1] -= 10 * in;
            arr.push_back(in);
            goto next;
        }
    }
    return arr;
}

int main() {
    int level, in;
    vector<int> initial = {1};
    vector<int> factorial(int x, vector<int> arr);
    vector<int> sum;
    cin >> level;
    for (int i = 1; i <= level; i++) {
        for(long long unsigned int j = 0; j < factorial(i, initial).size(); j++) {
            if (sum.size() < factorial(i, initial).size()) {
                sum.resize(factorial(i, initial).size());
                sum[j] += factorial(i, initial)[j];
            } else {
                sum[j] += factorial(i, initial)[j];
            }
            for (long long unsigned int k = 0; k < sum.size();) {
                if (sum[k] >= 10) {
                    in = sum[k] / 10;
                    sum[k] -= 10 * in;
                    if (k + 1 == sum.size()) {
                        sum.push_back(in);
                        k++;
                    } else {
                        sum[k + 1] += in;
                    }
                }
                k++;
            }
        }
    }
    for (long unsigned int i = sum.size(); i >= 1 ; i--) {
        cout << sum[i - 1];
    }
    return 0;
}