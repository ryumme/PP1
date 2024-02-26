#include <iostream>
using namespace std;

bool checkCheater(int a[], int i, int j, int n, int k) {
    if (j == n) {
        return false;
    }
    if (i != j) {
        if (abs(a[i] - a[j]) <= k) {
            return true;
        }
    }
    return checkCheater(a, i, j + 1, n, k);
}

string res(int a[], int i, int n, int k) {
    if (i == n) {
        return "no";
    }
    if (checkCheater(a, i, 0, n, k)) {
        return "cheater";
    }
    return res(a, i + 1, n, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << res(a, 0, n, k);
    return 0;
}