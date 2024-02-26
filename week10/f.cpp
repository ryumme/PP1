#include <iostream>

using namespace std;

int main() {
    double a[101];
    int n;
    cin >> n;
    int att1, att2, final, credits;
    double credits_sum = 0;

    for (int i = 0; i < n; i++) {
        a[i] = 0.0;
    }

    double cnt = 1.0;
    for (int i = 50; i < 100; i += 5) {
        a[i] = cnt;
        a[i + 1] = cnt;
        a[i + 2] = cnt;
        a[i + 3] = cnt;
        a[i + 4] = cnt;
        cnt += 0.33333333;
    }
    a[100] = 4.0;

    double gpa = 0;
    for (int i = 0; i < n; i++) {
        cin >> att1 >> att2 >> final >> credits;
        credits_sum += credits;
        if (att1 + att2 < 30 || final < 20) {
            gpa += a[0];
        } else {
            gpa += (a[att1 + att2 + final] * credits);
        }
    }

    if (credits_sum != 0) {
        cout << gpa / credits_sum << endl;
    return 0;
}
}
