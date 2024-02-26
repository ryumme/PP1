#include <iostream>
using namespace std;

bool isDegree(int n){
    if(n <= 0){
        return false;
    }
    int bits = sizeof(n) * 8;
    return (n & (n - 1)) == 0;
}
int main(){
    int num;
    cin >> num;
    if(isDegree(num)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}