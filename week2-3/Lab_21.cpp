#include <iostream>
using namespace std;

main(){
    int n;
    int count = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        if (inp > 0) {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}