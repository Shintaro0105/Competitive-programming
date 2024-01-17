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
    int n=9;
    int m;cin>>m;
    vector<vector<int>> to(n);
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<int> s(n,-1);
    rep(i,n-1){
        int p;cin>>p;
        p--;
        s[p]=i;
    }
    vector<int> t(n,-1);
    rep(i,n-1)t[i]=i;
    map<vector<int>,int> dist;
    queue<vector<int>> q;
    q.push(s);
    dist[s]=0;
    while(q.size()){
        s=q.front();q.pop();
        int d=dist[s];
        rep(v,n)if(s[v]==-1){
            for(int u:to[v]){
                swap(s[u],s[v]);
                if(dist.find(s)==dist.end()){
                    dist[s]=d+1;
                    q.push(s);
                }
                swap(s[u],s[v]);
            }
        }
    }
    if(dist.find(t)==dist.end())cout<<-1<<endl;
    else cout<<dist[t]<<endl;
    return 0;
}