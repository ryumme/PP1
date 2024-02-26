#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    vector< pair< string , double> > a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        for(int j=0; j<x; j++){
            string t;
            double q;
            cin >> t >> q;
            a.push_back(make_pair(t, q));
        }
    }
    int cnt=0;
    for(int i=0; i<a.size(); i++){
        cnt=cnt+a[i].second;
    }

    for(int i=0; i<a.size(); i++){
        int m=a[i].second;
        for(int j=0; j<a.size();j++){
            if(a[i].first==a[j].first){
                a[i].second=a[i].second+a[j].second;
            }
        }
        a[i].second=((a[i].second-m)*100)/cnt;
    }
    map<string, double>b;
    for(int i=0; i<a.size(); i++){
        b.insert(make_pair(a[i].first, a[i].second));
    }
    map<string, double> ::iterator it;
    for(it=b.begin(); it!=b.end(); it++){
        cout << (*it).first << " "<<(*it).second<<endl;
    }
}