#include <iostream>
using namespace std;

int main(){
    int n, l, r;
    long sum = 0;
    cin >> n >> l >> r;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i + 1 >= l && i + 1 <= r) {
            sum += num;
        }
    }
    cout << sum;
    
    return 0;
}