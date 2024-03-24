#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> h(n);
    rep(i,n)cin>>h[i];
    vector<vector<int>> g(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cnt=0;
    rep(i,n){
        int max_h=0;
        for(auto j:g[i]){
            max_h=max(max_h,h[j]);
        }
        if(h[i]>max_h)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}