#include <iostream>
using namespace std;

main(){
    int n;
    long sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum;
    
    return 0;

}