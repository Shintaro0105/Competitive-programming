#include <iostream>
#include <vector>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>> t(n);
    vector<int> c(n);
    rep(i,n)cin>>c[i];
    rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--;b--;
        t[a].push_back(b);
        t[b].push_back(a);
    }
    vector<int> cnt(1e5+1,0);
    vector<bool> ans(n,false);
    function<void(int, int)> dfs=[&](int v,int pa=-1)->void{
        if(cnt[c[v]]==0){
            ans[v]=true;
        }
        cnt[c[v]]++;
        for(int u:t[v]){
            if(u!=pa){
                dfs(u,v);
            }
        }
        cnt[c[v]]--;
    };
    dfs(0,-1);
    rep(i,n)if(ans[i])cout<<i+1<<'\n';
    return 0;
}