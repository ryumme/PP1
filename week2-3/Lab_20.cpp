#include <iostream>
#include <vector>
using namespace std;

main(){
    int n;
    vector<int> odds;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        if (inp % 2 != 0) {
            odds.push_back(inp);
        }
    }
    
    for (size_t i = 0; i < odds.size(); i++) {
        cout << odds[i] << " ";
    }
    
    return 0;
}