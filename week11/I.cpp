#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool qwe(string s)
{
    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size()-i-1])
        return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do
    {
        if(qwe(s))
        {
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << "JOJO";
return 0;
}