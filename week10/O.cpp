#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string rty(int n){
    if(n==0){
            return "0";
    }
    else if(n==1){
        return "1";
    }
    else{
        return rty(n/2) + rty(n%2);
    }
}
void qwe(int n){
    cout << rty(n) << "\n";
}
int main (){
    int n;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);

    }
    for_each(a.begin(), a.end(), qwe);
    return 0;
}