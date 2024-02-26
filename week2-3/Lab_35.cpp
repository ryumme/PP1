#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    float sqr = sqrt(n);
    
    if (ceil(sqr) == sqr || floor(sqr) == sqr) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}