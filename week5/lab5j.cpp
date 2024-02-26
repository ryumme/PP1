#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2, s3, s4;
    cin >> s1;
    int n = s1.size();
    s4 = s1;
    reverse(s4.begin(),s4.end());
    if(s1 == s4){
        cout << "YES";
        return 0;
    }
    s3 = s1.substr(1,n);
    s2 = s3;
    reverse(s2.begin(),s2.end());
    if(s3 == s2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}