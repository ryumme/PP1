#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    if(n>k){
        cout << (2*n + k-1)/k;
    }
    else{
        cout << (2*n + k)/k;
    }
    return 0;
}