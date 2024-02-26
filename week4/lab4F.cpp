#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int maxi = 0;
    int c = 0;
    int b = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            
            if(a[i][j] > maxi){
                maxi = a[i][j];
                c = i + 1;
                b = j + 1;
            }
        }
    }
    cout << c << " " << b << endl;
    return 0;
}