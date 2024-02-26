#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct point{
    int x;
    int y;
    point () {}
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};
point p;
bool cmp(point a, point b)
{
    double dda = sqrt(pow(a.x-p.x,2)+pow(a.y-p.y,2));
    double ddb = sqrt(pow(b.x-p.x,2)+pow(b.y-p.y,2));
    return dda < ddb;
}
int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    p.x = x;
    p.y = y;
    vector <point> v;
    for(int i = 0; i < n; i++)
    {
        int k, a;
        cin >> k >> a;
        v.push_back(point(k, a));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].x << " " << v[i].y << "\n";
    }
    return 0;
}