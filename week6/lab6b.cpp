#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long a, b;
    cin >> a;
    int massive1[a];
    int massive2[a];
    int massive3[a];
    for(int i=0; i<a; i++){
        cin >> massive1[i];
    }
    for(int j=0; j<a; j++){
        cin >> massive2[j];
    }
    for(int d=0; d<a; d++){
        massive3[d] = massive1[d] - massive2[d];
        if (massive3[d] < 0){
            massive3[d] = massive3[d] * -1;
        }
        cout << massive3[d] << " ";
    }
    return 0;
}