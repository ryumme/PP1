#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
bool g(pair<string, double> p, pair<string, double> l)
{
    if(p.second == l.second)
    {
        return p.first > l.first;
    }
    return p.second > l.second;
}
int main()
{
    int n, cnt = 0;
    cin >> n;
    map <string, double> mp;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        double k; cin >> k;
        mp[s] += k;
        cnt += k;
    }
    vector <pair<string, double> > v;
    map <string, double>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        it->second = it->second/cnt * 100;
        v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end(), g);
    vector <pair<string, double> > ::iterator iti;
    for(iti = v.begin(); iti != v.end(); iti++)
    {
        cout << iti->first << " " << iti->second << "%" << "\n";
    }
    return 0;
}