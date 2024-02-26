#include <iostream>
using namespace std;

main(){
    int n;
    int max;
    cin >> n;
    
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
        
    }
    cout << max;
    
    return 0;
}