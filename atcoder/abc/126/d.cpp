#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <bitset>
using namespace std;
using ll = long long int;
ll N;
vector<pair<ll,ll>> E[1000000];
int ans[1000000];

void dfs(ll v,ll = -1,int col = 0); //デフォルト引数

void dfs(ll v,ll pa,int col){
    ans[v] = col;
    for(auto &p:E[v]){
        if(p.first == pa)continue;

        if(p.second==0)dfs(p.first,v,col);
        else dfs(p.first,v,1-col);
    }
}

int main(){
    cin >> N;
    for(int i = 0;i<N-1;i++){
        ll a,b;
        ll c;
        cin >> a >> b >> c;
        a--; b--;

        E[a].push_back({b,c%2});
        E[b].push_back({a,c%2});
    }
    dfs(0);

    for(int i =0;i<N;i++)printf("%d\n",ans[i]);
}


