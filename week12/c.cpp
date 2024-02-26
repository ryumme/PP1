#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool isPowerOfTwo(int num){
    return(num & (num - 1)) == 0;
}

bool isPowerfulArray(const vector<int>& arr){
    int xorResult = accumulate(arr.begin(), arr.end(), 0, [](int a, int b) {return a ^ b;});
    return isPowerOfTwo(xorResult);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(isPowerfulArray(arr)){
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}
