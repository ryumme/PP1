#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;

  cin >> a >> b;
 
  vector <int> v(a);
 
  for(int i=0; i < a; i++) {
    cin >> v[i];
     }

   
int z;
z = abs(a-b);

  rotate(v.rbegin(), v.rbegin() + a, v.rend());
  
   reverse(v.begin(), v.end());

rotate(v.begin(), v.begin() + z, v.end());


  for(int i=0; i < a; i++) {
    cout << v[i] << " ";
     }

}
