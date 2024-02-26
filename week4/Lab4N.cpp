#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i < n; i++){
        int a = 0;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                a = 1;
                break;
            }
        }
        if(a == 0){
        cout << i << " is prime" << endl;
        }
    }
   return 0;
}