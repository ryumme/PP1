#include <iostream>
using namespace std;

int main(){
    int decimal;
    int binary[32];
    cin >> decimal;
    int i = 0;

    while(decimal != 0){
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        cout << binary[j];
    }
    return 0;
}