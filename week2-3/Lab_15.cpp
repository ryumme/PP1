#include <iostream>
#include <cmath>
using namespace std;

main(){
    int n;
    cin >> n; 

    for (int i = 1; i <= n; i++) {
        double sqr = sqrt(i);
        if (ceil(sqr) == sqr || floor(sqr) == sqr) {
            cout << i << endl;
        }
    }    
    return 0;
}