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
    int min[m];
    int min_rows[m];
    int min_cols[m];
    for(int j = 0; j < m; j++){
        min[j] = a[0][j];
        min_rows[j] = 0;
        min_cols[j] = j;
        for(int i = 1; i < n; i++){
            if(a[i][j] < min[j]){
                min[j] = a[i][j];
                min_rows[j] = i;
                min_cols[j] = j;
            }
        }
    }
    int sum = 0;
    for(int j = 0; j < m; j++){
        sum += min[j];
    }
    cout << "coordinates of min elements: " << endl;
    for(int j = 0; j < m; j++){
        cout << min_rows[j] + 1 << ";" << min_cols[j] + 1 << endl;
    }
    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum << endl;
    return 0;
}