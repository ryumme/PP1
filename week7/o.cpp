#include <iostream>
#include <string>
using namespace std;

string decimal_To_Base(int decimal_Number, int base) {
    string result = "";

    while (decimal_Number > 0) {
        int remainder = decimal_Number % base;

        char digit;
        if (remainder < 10) {
            digit = '0' + remainder;
        } else {
            digit = 'A' + (remainder - 10);
        }

        result = digit + result;

        decimal_Number /= base;
    }

    if (result.empty()) {
        result = "0";
    }

    return result;
}

int main() {
    int number, base;

    cin >> number >> base;

    string result = decimal_To_Base(number, base);
    cout << result << endl;

    return 0;
}