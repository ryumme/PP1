#include <iostream>

using namespace std;

int main() {
    long long a, b = 0;
    cin >> a;
    int massive1[a];
    int massive2[a];
    int count1[1000001] = {0}; 
    
    for (int i = 0; i < a; i++) {
        cin >> massive1[i];
        count1[massive1[i]]++; 
    }
    
    for (int i = 0; i < a; i++) {
        cin >> massive2[i];
    }
    
    for (int i = 0; i < a; i++) {
        if (count1[massive2[i]] > 0) {
            b++;
            count1[massive2[i]]--;
        }
    }
    
    cout << b;
    
    return 0;
}
