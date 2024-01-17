#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a)  (a).begin(),(a).end()
using namespace std;

int main(){
    int n;cin>>n;
    vector<pair<int,int>> p;
    vector<int> v(n,0);
    rep(i,n*3){
        int a;cin>>a;
        a--;
        v[a]++;
        if(v[a]==2){
            p.push_back(make_pair(i,a));
        }
    }
    sort(ALL(p));
    rep(i,n-1){
        cout<<p[i].second+1<<' ';
    }
    cout<<p[n-1].second+1<<endl;
    return 0;
}