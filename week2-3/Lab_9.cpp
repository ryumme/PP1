#include <iostream>
using namespace std;

int a,b;

int main(){
cin >> a >> b;
if(a > b){
    cout << "1" << endl;
}
if(b > a){
    cout << "2" << endl;
}
if(a == b){
    cout << "0" << endl;
}
return 0;
}