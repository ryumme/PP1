#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map <char, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        set <char> st;
        for(int j = 0; j < s.size(); j++)
        {
            st.insert(s[j]);
        }
        set <char> ::iterator it;
        for(it = st.begin(); it != st.end(); it++)
        {
            mp[(*it)]++;
        }
    }
    bool target = false;
    map <char, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second == n)
        {
            cout << it->first << " ";
            target = true;
           
        }
    }
    if(target == false) cout << "NO COMMON CHARACTERS";
}