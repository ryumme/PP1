#include <iostream>
#include <string>
using namespace std;

int sumDigits(string s){
  int sum = 0;
    for (char c : s){
        if (isdigit(c)){
        sum += (c - '0');
        }
    }
    return sum;
}

int main(){
    string s;
    cin >> s;
    int digitSum = sumDigits(s);
    cout << digitSum << endl;
    return 0;
}