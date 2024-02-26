#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i + 1 >= l && i + 1 <= r) {
            arr[r-i+l-2] = num;
        } else {
            arr[i] = num;
        }
        
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}