#include <bits/stdc++.h>

using namespace std;

void vowels( string s1, string s2 ){
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == 'a' or s1[i] == 'e' or s1[i] == 'i' or s1[i] == 'o' or s1[i] == 'u' or s1[i] == 'A' or s1[i] == 'E' or s1[i] == 'I' or s1[i] == 'O' or s1[i] == 'U'){
            continue;
        }
        s2 += s1 [i];
    }
    cout << s2;
}
int main(){
    string s2 = "";
    string s1;
    getline( cin, s1 );
    vowels( s1, s2 );
    return 0;
}