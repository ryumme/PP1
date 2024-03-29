#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    arr.resize(n + m);
    for (int i = n; i < n + m; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n + m; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}