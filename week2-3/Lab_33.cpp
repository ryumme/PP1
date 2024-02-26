#include <iostream>
#include <vector>
using namespace std;

main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num * num;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;

}