#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[n - 1 - i] = num;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}