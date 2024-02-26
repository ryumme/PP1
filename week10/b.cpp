#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long power(int x) {
    return static_cast<long long>(powl(x, x));
}

int main() {
    int n;
    cin >> n;

    vector<long long> vec(n + 1);

    generate(vec.begin(), vec.end(), [n = 0]() mutable {
        return power(n++);
    });

    for (long long result : vec) {
        cout << result << " ";
    }

    return 0;
}
