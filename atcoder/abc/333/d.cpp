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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    vector<vector<int>> g(n);
    rep(i,n-1){
        int u,v;cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> seen(n,-1);
    queue<pair<int,int>> q;
    int j=0;
    for(int i:g[0]){
        q.push(make_pair(i,j));
        seen[i]=j;
        j++;
    }
    seen[0]=true;
    while(!q.empty()){
        auto [i,j]=q.front();
        //cout<<i<<' '<<j<<endl;
        q.pop();
        for(int to:g[i]){
            if(seen[to]==-1&&to!=0){
                q.push(make_pair(to,j));
                seen[to]=j;
            }
        }
    }
    vector<int> num(j,0);
    for(int i=1;i<n;i++){
        num[seen[i]]++;
    }
    if(g[0].size()==1){
        cout<<1<<endl;
    }else{
        int ans=0;
        sort(ALL(num));
        rep(i,j-1)ans+=num[i];
        cout<<ans+1<<endl;
    }
    return 0;
}