#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    
    bool target = true;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

    } 
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == v[i+1])
        {
            target = false;
            break;
        }
    }   
    if(target == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}