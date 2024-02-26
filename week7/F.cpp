#include <iostream>
#include <string>

using namespace std;

int countEvenDigits(string numStr) {
    int count = 0;
    for (size_t i = 0; i < numStr.length(); i++) {
        if (isdigit(numStr[i])) {
            int digitValue = numStr[i] - '0';
            if (digitValue % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string numStr;
    cin >> numStr;

    int evenCount = countEvenDigits(numStr);
    cout << evenCount << endl;
    return 0;
}