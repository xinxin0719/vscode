#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  // 请在此输入您的代码
  vector<int> num;
  string how;
  int temp, times;
  cin >> times;
  for (int i = 0; i < times; i++) {
    cin >> how;
    if (how == "push") {
      cin >> temp;
      num.push_back(temp);
    } else if (how == "pop") {
      if (!num.empty()) {
        num.erase(num.begin());
      }
    } else if (how == "empty") {
      if (num.empty()) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      if (num.empty()) {
        cout << "empty" << endl;
      } else {
        cout << num[0] << endl;
      }
    }
  }
  return 0;
}