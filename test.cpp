#include <iostream>
#include <numeric>
using namespace std;
int main()
{
  // 请在此输入您的代码
  long long a, b = 0, num = 0, times = 1;
  for (a = 1; a <= 1000000 - 1; a++) {
    cout << a << '\n';
    b = 0;
    times = 1;
    for (; 2025 * times - a < 1000000; times++) {
      b = 2025 * times - a;
      if (gcd(a, b) == 1 && a < b) {
        num++;
      }
    }
  }
  cout << num;
  return 0;
}