#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int b = 0;
    string a;
    vector<int> vec;
    cin >> a;
    for (const auto &ch : a){
        if (ch == '1' && b == 0){
            b = 1;
            vec.push_back(1);
        }
        else if (ch == '1' && b > 0){
            b = 0;
            vec.pop_back();
        }
        else {
            b = 0;
            vec.push_back(0);
        }
    }
    for(const auto& element : vec){
        cout << element;
    }
    
}