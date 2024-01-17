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

int n,m;
vector<bool> seen(n);

void dfs(int now,int prev){
    if(now+1==n){
        string s;
        cin>>s;
        exit(0);
    }
    seen[now]=true;
    int k;cin>>k;
    vector<int> g;
    rep(i,k){
        int v;cin>>v;
        v--;
        g.push_back(v);
    }
    for(int i:g){
        if(!seen[i]){
            cout<<i+1<<endl;
            dfs(i,now);
        }
    }
    cout<<prev+1<<endl;
    cin>>k;
    rep(i,k){
        int v;cin>>v;
        v--;
        g.push_back(v);
    }
}

int main(){
    cin>>n>>m;
    seen.resize(n,false);
    dfs(0,0);
    return 0;
}