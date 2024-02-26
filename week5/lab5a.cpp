#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int capital = 0;
    int small = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            capital++;
        } else if(s[i] >= 'a' && s[i] <= 'z'){
            small++;
        }
    }
    cout << small << " " << capital << endl;
    return 0;
}