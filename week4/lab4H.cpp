#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
        for(int j = 0; j < m; j++){
            sum[i] += a[i][j];
        }
    }
    int min = sum[0];
    int min_index = 0;
    for(int i = 0; i < n; i++){
        if(sum[i] < min){
            min = sum[i];
            min_index = i;
        }
    }
    cout << min_index + 1 << endl;

    return 0;
}