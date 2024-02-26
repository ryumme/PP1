#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b=0, c=0, d=0;
    cin >> a >> b;
    vector<int> Vec;
    for(int i=0; i<a; i++){
        cin >> c;
        Vec.push_back(c);
        if(c == b){
            d++;
        }
    }
    cout << d;
    }