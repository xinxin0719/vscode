#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c, char arr[]) {
  for (int i = 0; i < 5; i++) {
    if (c == arr[i]) {
      return true;
    }
  }
  return false;
}

int main()
{
  // 请在此输入您的代码
  char notes[] = {'a', 'e', 'i', 'o', 'u'};
  int step = 1, point = 0;
  bool is = true;
  string word;
  cin >> word;
  for (int i = 0; i < 5; i++) {
    if (notes[i] == word[0]) {
      return 0;
    }
  }
  point++;
  while (step < word.size()) {
    if (!is) {
      if (!isVowel(word[step], notes)) {
        point++;
        is = true;
      }
      step++;
    } 
    if (is) {
      if (isVowel(word[step], notes)) {
        point++;
        is = false;
      }
      step++;
    }
  }
  if (point == 4) {
    cout << "yes";
  } else {
    cout << "no";
  }
  return 0;
}