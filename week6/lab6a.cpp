#include <iostream>
using namespace std;

int sumoftwo(int a, int b){
    return a + b;
}
int main(){
    int a, b;
    cin >> a >> b;
    int result = sumoftwo(a, b);
    cout << result << endl;
    return 0;
}