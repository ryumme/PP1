#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = char((s[i]+n-'A')%26+65);
    }
    cout << s;
    return 0;
}