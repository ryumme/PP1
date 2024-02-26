#include <iostream>
#include <sstream>
using namespace std;

main(){
    int n;
    int count = 0;
    cin >> n; 

    for (int i = 0; i < n; i++) {
        string num;
        char digit;
        cin >> num;
        stringstream ss(num);
        while (ss >> digit) {
            if (digit == '0') {
            count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}