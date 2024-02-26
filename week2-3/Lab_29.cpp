#include <iostream>
using namespace std;

int main(){
    int n;
    int target; 
    int found = -1;
    cin >> n >> target;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int high = n - 1, low = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    found > -1 ? cout << found : cout << low;
    
    return 0;
}