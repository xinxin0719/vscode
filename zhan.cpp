#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int front[1000001];
  int behind[1000001];
  int number, date, sum = 0;
  char note;
  cin >> number;
  for (int i = 0; i < number; i++) {
    cin >> date >> note;
    if (note == 'F') {
      front[date]++;
    }else {
      behind[date]++;
    }
  }
  for (int i = 0; i < 1000001; i++) {
    sum += min(behind[i], front[i]);
  }
  cout << sum;
  return 0;
}