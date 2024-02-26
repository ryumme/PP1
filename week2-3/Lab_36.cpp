#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}