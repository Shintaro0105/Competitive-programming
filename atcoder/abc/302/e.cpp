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
    int n,q;cin>>n>>q;
    int sum=n;
    vector<set<int>> r(n);
    rep(qi,q){
        int t;cin>>t;
        if(t==1){
            int u,v;
            cin>>u>>v;
            u--;v--;
            if(r[u].size()==0)sum--;
            if(r[v].size()==0)sum--;
            r[u].insert(v);
            r[v].insert(u);
            cout<<sum<<'\n';
        }else if(t==2){
            int v;cin>>v;
            v--;
            if(r[v].size()!=0)sum++;
            for(int u:r[v]){
                r[u].erase(v);
                if(r[u].size()==0)sum++;
            }
            r[v].clear();
            cout<<sum<<'\n';
        }
    }
    return 0;
}