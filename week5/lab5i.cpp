#include <iostream>
#include <algorithm>
using namespace std;

int main() {
const int N = 100100;
string s;
string t;
int a [N], b [N];
 cin >> s >> t;
 for(int i = 0; i < s.size(); i ++) {
  a[s[i] - 'a'] ++; 
 }
 for(int i = 0; i < t.size(); i ++) {
  b[t[i] - 'a'] ++;
 }
 for(char i = 'a'; i <= 'z'; i ++) {
  if(a[i - 'a'] != b[i - 'a']) {
   cout << "NO";
   exit(0);
  }
 }
 cout << "YES";
 return 0;
}