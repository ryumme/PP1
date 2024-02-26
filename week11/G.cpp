#include <iostream>
#include <set>
#include <map>
using namespace std;
map <string, set <int> > mp;
int main()
{

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        int x; cin >> x;
        mp[s].insert(x);
    }
    for (auto s : mp) {
		cout << s.first << " ";
		if (s.second.size() < 3)
			cout << "NO BONUS" << endl;
		else cout << "+1" << endl;
	}
	return 0;
}