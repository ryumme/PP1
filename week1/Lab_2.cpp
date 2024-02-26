#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,e;

    cin >> a >> b;

    c = b / 100;
    d = b % 10;
    e = c + d;

    int result = a + e;

    cout << result << endl;

    return 0;
}