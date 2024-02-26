#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string>q;
    vector<int>w;
    for(int i=0; i<n; i++){
        string r;
        int t;
        cin >> r >> t;
        q.push_back(r);
        w.push_back(t);
    }
    sort(q.begin(), q.end());
    sort(w.begin(), w.end());
    for(int i=0; i<q.size(); i++){
        cout << q[i] << " "<< w[i]<< endl;
    }
}