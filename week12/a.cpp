#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> a;
    for(int i = 0; i < n; i++){
        arr[i] = abs(arr[i] - a);
    }
    int min = arr[0];
    int res = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}