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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<vector<int>> g(n);
    rep(i,n){
        int c;cin>>c;
        rep(j,c){
            int p;cin>>p;
            p--;
            g[i].push_back(p);
        }
    }
    vector<int> ans;
    vector<bool> seen(n,false);
    auto dfs=[&](auto dfs,int i)->void{
        bool flag=true;
        for(int j:g[i]){
            if(!seen[j])dfs(dfs,j);
        }
        seen[i]=true;
        if(i!=0)ans.push_back(i);
    };
    dfs(dfs,0);
    int l=ans.size();
    rep(i,l-1)cout<<ans[i]+1<<' ';
    cout<<ans[l-1]+1<<endl;
    return 0;
}