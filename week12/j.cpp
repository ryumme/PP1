#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> m;
    vector<int> brr(m);
    for(int i = 0; i < m; i++){
        cin >> brr[i];
    }
    unordered_set<int> seen;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            seen.insert(arr[i] + arr[j]);
        }
    }
    for(int num : brr){
        if(seen.find(num) != seen.end()){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}