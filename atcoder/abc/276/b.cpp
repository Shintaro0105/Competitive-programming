#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i,n){
        int d=g[i].size();
        sort(g[i].begin(),g[i].end());
        cout<<d;
        for(int a:g[i]){
            cout<<' '<<a+1;
        }
        cout<<endl;
    }
    return 0;
}