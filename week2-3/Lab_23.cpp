#include <iostream>
#include <vector>
using namespace std;

main(){
    int n;
    int max;
    cin >> n;
    vector<int> arr;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i == 0) {
            max = num;
        } else {
            if (num > max) {
                max = num;
            }
        }
        arr.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            cout << i + 1;
            break;
        }
    }
    
    return 0;
}