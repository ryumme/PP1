#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int left = 0;
    int right = s.size() - 1;
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    bool palindrome = isPalindrome(s);
    if(palindrome){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}