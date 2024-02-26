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
    for(int i = 0; i < n; i++){
        int row_sum = 0;
        for(int j = 0; j < m; j++){
            row_sum += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << row_sum << endl;
    }
    for(int j = 0; j < m; j++){
        int column_sum = 0;
        for(int i = 0; i < n; i++){
            column_sum += a[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << column_sum << endl;
    }
    return 0;
}   