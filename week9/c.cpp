#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b=0, c=0, d=-5;
    cin >> a;
    vector<int> Vec;
    for(int i=0; i<a; i++){
        cin >> c;
        Vec.push_back(c);
    }
    sort(Vec.begin(), Vec.end());
    for(int i=0; i<a; i++){
        if(i + 1 < a && Vec[i] == Vec[i + 1]){
            Vec[i] = d;
            d--;
            Vec[i + 1] = d;
            d--;
            b++;
        }
    }
    cout << b;
    }