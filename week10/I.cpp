#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a;
    vector<int>b;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }
    reverse(b.begin(), b.end());
    for(int i=0; i<n; i++){
        if(a[i]==b[i]){
            cout <<"OK"<<"\n";
        }
        else{
            cout<<"Instead of "<<a[i]<<" here was "<<b[i]<<"\n";
        }
    }
    return 0;
}