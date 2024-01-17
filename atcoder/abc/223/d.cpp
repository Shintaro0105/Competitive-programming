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
    vector<vector<int>> to(n);
    vector<int> deg(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        to[a].push_back(b);
        deg[b]++;
    }
    priority_queue<int,vector<int>,greater<int>> q;
    rep(i,n)if(deg[i]==0)q.push(i);
    vector<int> ans;
    while(q.size()){
        int v=q.top();q.pop();
        ans.push_back(v);
        for(int u:to[v]){
            deg[u]--;
            if(deg[u]==0)q.push(u);
        }
    }
    if(ans.size()!=n)cout<<-1<<endl;
    else{
        for(int v:ans)cout<<v+1<<endl;
    }
    return 0;
}