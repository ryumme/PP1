#include <iostream>
using namespace std;
  
int m(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}
  
int main()
{
    int n;
    cin >> n;
    cout << m(n);
    return 0;
}