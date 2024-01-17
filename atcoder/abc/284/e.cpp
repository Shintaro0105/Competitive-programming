#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int sum=0;

void dfs(int v,vector<bool> &ok,vector<vector<int>> &g){
    //cout<<v<<endl;
    if(sum==1000000){
        return;
    }
    
    sum++;
    ok[v]=true;
    
    for(int u:g[v]){
        if(!ok[u])dfs(u,ok,g);
    }
    ok[v]=false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> ok(n,false);
    dfs(0,ok,g);
    if(sum<1000000)cout<<sum<<endl;
    else cout<<1000000<<endl;
    return 0;
}