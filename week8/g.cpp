#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
    int i = 5;
    while(i * i <= n){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        i += 6;
    }
    return true;
}
int countNum(vector<int>& v, int k){
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i]) && v[i] > k){
            count++;
        }
    }
    return count;
}
int main(){
    int n, k;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> k;
    int primecount = countNum(v, k);
    cout << primecount << endl;
    return 0;
}