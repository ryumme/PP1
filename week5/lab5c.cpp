#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;
    int found = s.find(t);
    if(found != -1){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}