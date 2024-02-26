#include <bits/stdc++.h>
using namespace std;

bool compareDescending(int a, int b) {
    return a > b;
}

int main(){
    long long a;
    cin >> a;
    int massive[a];
    vector<int> Vec1;
    vector<int> Vec2;
    for(int i=0; i<a; i++){
        cin >> massive[i];
        if(massive[i] % 2 == 0){
            Vec1.push_back(massive[i]);
        }
        else Vec2.push_back(massive[i]);
    }
    sort(Vec1.begin(), Vec1.end(), compareDescending);
    sort(Vec2.begin(), Vec2.end(), compareDescending);
    reverse(Vec2.begin(), Vec2.end());
    for(int i=0; i<Vec1.size(); i++){
        cout << Vec1[i] << " ";
    }
    for(int i=0; i<Vec2.size(); i++){
        cout << Vec2[i] << " ";
    }
    }