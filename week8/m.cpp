#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++){
        if (arr [i] != arr [i - 1]) sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}