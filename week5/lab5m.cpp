#include <iostream>
#include <algorithm>
using namespace std;

    string joke (string s, string d, int a){
    int arr[100];
    int arr2[100];
    for (int i = 0; i < 100; i++){
        arr[i] = 0;
        arr2[i] = 0;
    }
    for (int i = 0; i < s.length(); i++){
        arr[s[i] - 97]++;
    }
    for (int i = 0; i < d.length(); i++){
        arr2[d[i] - 97] = a;
    }
    sort(arr, arr + 100);
    sort(arr2, arr2 + 100);
    for (int i = 0; i < 100; i++){
        if (arr[i] == arr2[i] && arr[i] == a){
            return "YES";
        }
    }
    return "NO";
}
int main (){
    string s, d;
    int a;
    cin >> s >> d >> a;
    cout << joke (s, d, a) << endl;
    return 0;
}