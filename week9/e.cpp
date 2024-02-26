#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> countMap;
    string str;

    for (int i = 0; i < n; ++i) {
        cin >> str;
        countMap[str]++;
    }

    int count = 0;
    for (const auto &pair : countMap) {
        if (pair.second == 3) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}