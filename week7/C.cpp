#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int list[a];
    for(int i = 0; i < a; i++){
        cin >> list[i];
    }
    int targ;
    cin >> targ;

    bool isFound = false;
    for(int i = 0; i < a; i++){
        if(list[i] == targ){
            isFound = true;
            break;
        }
    }
    if(isFound){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}