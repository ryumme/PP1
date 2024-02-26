#include <iostream>
#include <algorithm>
using namespace std;

void IsTasty(string s){
    int sum = 0;
    for(int i = 0;i < s.length(); i++){
        sum += int(s[i]);
    }
    if(sum > 300){
        cout << "It is tasty!";
    } else {
        cout << "Oh, no!";
    }
}

int main(){
    string s;
    cin >> s;
    IsTasty(s);
    return 0;
}