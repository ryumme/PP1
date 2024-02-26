#include <iostream>
#include <algorithm>
using namespace std;

struct Pair {
    int first;
    int second;
};

int main() {
    long long a;
    cin >> a;
    Pair massive[a];

    for (int i = 0; i < a; i++) {
        cin >> massive[i].first >> massive[i].second;
    }

    sort(massive, massive + a, [](const Pair &b, const Pair &c) {
        if (b.first != c.first) {
            return b.first < c.first;
        } else {
            return b.second < c.second;
        }
    });

    for (int i = 0; i < a; i++) {
        cout << massive[i].first << " " << massive[i].second << endl;
    }

    return 0;
}
