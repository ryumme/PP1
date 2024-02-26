#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (b != 0){
        int c;
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
    int n = 0;
    std::cin >> n;
    int arr[100];
    for (int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if(i != j){
                max = std::max(gcd(arr[i], arr[j]), max);
            }
        }
    }
    std::cout << max;
}