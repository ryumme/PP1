#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}