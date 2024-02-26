#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << "None" << endl;
        return 0;
        }
    if(n % 2 == 1){
        cout << "Odd" << endl;
    }
    if(n % 2 == 0){
        cout << "Even" << endl;
    }
    return 0;
}