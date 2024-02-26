#include <iostream>
#include <string>

int main() {
    int b = 0;
    std::string a;
    std::cin >> a;

    for (const auto &ch : a) {
        if (ch == '(' && b >= 0) {
            b++;
        } else if (ch == ')' && b > 0) {
            b--;
        } else {
            b = -1;
            break;
        }
    }

    if (b != 0) {
        std::cout << "NO";
    } else {
        std::cout << "YES";
    }

    return 0;
}