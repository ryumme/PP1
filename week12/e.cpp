#include <iostream>
#include <string>

using namespace std;

string decimalToHex(int n) {
  string s = "";
  int remainder;
  while (n > 0) {
    remainder = n % 16;
    char hexDigit;
    if (remainder < 10) {
      hexDigit = '0' + remainder;
    } else {
      hexDigit = 'A' + (remainder - 10);
    }
    s = hexDigit + s;
    n /= 16;
  }

  return s;
}

int main() {
  int n;
  cin >> n;
  string hexString = decimalToHex(n);
  cout << hexString << endl;
  return 0;
}