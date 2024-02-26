#include <iostream>
using namespace std;

int main(){
    int n;
    int min, max;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
        if (i == 0) {
            min = num;
            max = num;
        }
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            arr[i] = min;
        }
        cout << arr[i] << " ";
    }
    
    return 0;
}