#include <iostream>
#include <string>

using namespace std;

int maxDigit(string numStr) {
  int maxDigit = 0;
  for (char digit : numStr) {
    if (isdigit(digit)) {
      maxDigit = max(maxDigit, digit - '0');
    }
  }

  return maxDigit;
}

int main() {
  string numStr;
  cin >> numStr;

  int result = maxDigit(numStr);
  if (result != -1) {
    cout << result << endl;
  } 
  return 0;
}