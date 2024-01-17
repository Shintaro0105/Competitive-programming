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

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> g(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i,n){
        vector<bool> seen(n,false);
        seen[i]=true;
        int ans=0;
        for(int j:g[i]){
            seen[j]=true;
        }
        for(int j:g[i]){
            seen[j]=true;
            for(int k:g[j]){
                if(!seen[k])ans++;
                //out<<i<<' '<<j<<' '<<k<<endl;
                seen[k]=true;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}