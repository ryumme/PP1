#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> uniqueNums;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (i == 0) {
            uniqueNums.push_back(num);
        } else {
            bool isUnique = true;
            for (int j = 0; j < uniqueNums.size(); j++) {
                if (num == uniqueNums[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                uniqueNums.push_back(num);
            }
        }
    }
    for (int i = 0; i < uniqueNums.size(); i++) {
        cout << uniqueNums[i] << " ";
    }
    
    return 0;
}