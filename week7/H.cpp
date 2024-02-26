#include <iostream>
using namespace std;

int main(){
    int n;
    int a[12] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    cin >> n;
    int result;
    if(n == 0){
        result = 0;
    }
    if(n == 1){
        result = 0;
    }
    cout << a[n - 1] << endl;
    return 0;
}