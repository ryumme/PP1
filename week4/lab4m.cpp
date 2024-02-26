#include <iostream>

using namespace std;

int main(){
    int n, i, j, c = 1;
    cin >> n;
    int left = 0, right = n - 1, up = 0, down = n - 1;
    int a[n][n];
    while(1){
        if(c > n * n){
            break;
        }
        for(i = left; i <= right; i++){
            a[up][i] = c;
            c++;
        }
        up++;
        if(c > n * n){
            break;
        }
        for(i = up; i <= down; i++){
            a[i][right] = c;
            c++;
        }
        right--;
        if(c > n * n){
            break;
        }
        for(i = right; i >= left; i--){
            a[down][i]=c;
            c++;
        }
        down--;
        if(c > n * n){
            break;
        }
        for(i = down; i >= up; i--){
            a[i][left]=c;
            c++;
        }
        left++;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}