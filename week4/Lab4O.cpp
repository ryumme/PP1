#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int maxi = a[0][0];
    int row = 0;
    int column = 0;

    for(int i = 0; i < n; i++){
        int digit = a[i][i];
        if(digit > maxi){
            maxi = digit;
            row = i;
            column = i;
        }
    }
    cout << "Maximum element is: " << maxi << " with coordinates: " << row + 1 << ";" << column + 1 << endl;
    return 0;
}