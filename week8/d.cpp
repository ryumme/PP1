#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    cin >> b;
    v.erase(v.begin() + b);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}