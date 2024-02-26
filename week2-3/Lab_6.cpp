#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 == 1){
        cout << "Super" << endl;
        return 0;
    }
    if(n % 2 == 0){
         if(n >= 20 ){
        cout << "Not Super" << endl;
        return 0;
    }
        if( 5 <= n <= 20){
            cout << "Super" << endl;
            return 0;
        }
        if( 2 <= n <= 5){
            cout << "Not Super" << endl;
            return 0;
        }

        }
        return 0;
    
}