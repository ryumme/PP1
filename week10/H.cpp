#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if(a[i]==a[j]){
                
                a.erase(a.begin()+j);
                j--;
            }
            
        }
    }
    
    do {
        for(int i=0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout << "\n";
  } while ( next_permutation(a.begin(),a.end()) );
return 0;
}