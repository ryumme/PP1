#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int cnt=0;
    for(int i=1; i<=n; i++){
        cnt=cnt+i;
    }
    vector<int>a(cnt);
    int k=0;
    for(int i=n; i>0; i--){
        fill(a.begin(), a.end()-k,i);
        k=k+i;
    }
    for(int i=0; i<a.size(); i++){
        cout << a[i]<<" ";
    }
    return 0;
}