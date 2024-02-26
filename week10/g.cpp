#include <iostream>
#include <map>
#include <sstream>
using namespace std;
string qwe(int t){
    string k;
    stringstream ss;
    ss << t;
    ss >> k;
    return k;

}
int main(){
    int n;
    cin >> n;
    map<string, int> a;
    for(int i=0; i<n; i++){
        string q, w;
        int e, r;
        cin >> q >> e >> w >> r;
        string t;
        int k=e+r;
        t=q+" and "+w+" "+qwe(k);
        a.insert(make_pair(t, i));
    }
    map<string, int> ::iterator aa;
    for(aa=a.begin(); aa!=a.end(); aa++){
        cout<< aa->first<<endl;
    }
}