#include <iostream>
using namespace std;

int main(){
    int n;
    int max;
    int num;
    cin >> n;
    for(int i = 0; i < 0; i++){
        cin >> num;
        if (i == 0){
            max = num;
        } else{
            if(num > max) {
                max = num;
            }
        }
    }
    cout << max << endl;
}