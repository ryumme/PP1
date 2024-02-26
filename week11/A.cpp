#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int N;
    string days [7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for(int i = 0; i < 7; i++)
    {
        if(days[i] == s)
        {
            cout << 7 - i;
    
        }
    }
    return 0;
}