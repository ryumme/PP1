#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Row {
    int sum;
    int size;
    vector<int> elements;
};

bool compareRows(const Row &a, const Row &b) {
    if (a.sum != b.sum) {
        return a.sum < b.sum;
    }
    if (a.size != b.size) {
        return a.size < b.size;
    }
    for (size_t i = 0; i < a.elements.size(); ++i) {
        if (a.elements[i] != b.elements[i]) {
            return a.elements[i] < b.elements[i];
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<Row> rows(N);

    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M;
        rows[i].size = M;
        for (int j = 0; j < M; ++j) {
            int element;
            cin >> element;
            rows[i].sum += element;
            rows[i].elements.push_back(element);
        }
    }

    sort(rows.begin(), rows.end(), compareRows);

    for (const Row &row : rows) {
        for (int element : row.elements) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
