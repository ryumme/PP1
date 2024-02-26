#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int b = 1;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(i == j){
                cout << b++;
            } else {
                cout << ".";
            }   
        }
        cout << endl;
    }
    return 0;
}