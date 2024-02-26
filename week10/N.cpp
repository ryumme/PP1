#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a;

    int k=1;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        a.push_back(x);
       
        k=k*i;
    }
    

    sort(a.begin(), a.end());
    int cnt=0;
    do {
        vector<int>b;
        vector<int>c;
        for(int i=0; i<a.size(); i++){
            b.push_back(a[i]);
            c.push_back(a[i]);
        }
        reverse(c.begin(), c.end());
        if(c==b){
            cnt++;
            for(int i=0; i<b.size(); i++){
                cout << b[i]<<" ";
            }
                break;
        }
        
    } while ( next_permutation(a.begin(),a.end()) );
    if(cnt==0){
        cout <<"Impossible";
    }
return 0;
}