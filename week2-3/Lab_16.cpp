#include <iostream>
#include <cmath>
using namespace std;

main(){
    int n;
    cin >> n; 

    for (int i = 1; i <= n; i++) {
        double lg = log2(i);
        if (ceil(lg) == lg || floor(lg) == lg) {
            cout << i << " ";
        }
    }    
    return 0;
}