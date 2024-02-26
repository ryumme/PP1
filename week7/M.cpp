#include <iostream>
using namespace std;

void recs(int n){
    if(n <= 0){
        return;
    }
    recs(n - 1);
    cout << n << " ";
}
int main(){
    int n;
    cin >> n;
    recs(n);
}