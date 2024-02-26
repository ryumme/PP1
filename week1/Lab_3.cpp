#include <iostream>

using namespace std;

int main(){

    int a,b,c,d,m,n;
    cin >> n;

    a = n % 2;
    n = n / 2;

    b = n % 2;
    n = n / 2;

    c = n % 2;
    n = n / 2;

    d = n % 2;

    int result = d*1 + c*2 + b*4 + a*8;

    cout << result << endl;
    
    return 0;
}

