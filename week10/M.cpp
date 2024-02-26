#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector<int>::iterator aa;
    vector<int>::iterator bb;
    aa=unique(a.begin(), a.end());
    bb=unique(b.begin(), b.end());
    a.resize(distance(a.begin(),aa));
    b.resize(distance(b.begin(),bb));
    for(int i=0; i<a.size()+b.size(); i++){
        if(i%2==0){
            c.push_back(a[i/2]);
        }
        else{
            c.push_back(b[(i-1)/2]);
        }
    }
    vector<int>::iterator cc;
    cc=unique(c.begin(), c.end());
    c.resize(distance(c.begin(),cc));
    for(int i=0; i<c.size(); i++){
        cout << c[i]<<" ";
    }
    return 0;
}