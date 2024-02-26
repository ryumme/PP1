#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    cin >> b >> c;
    v.erase(v.begin() + b, v.begin() + c + 1);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;

}