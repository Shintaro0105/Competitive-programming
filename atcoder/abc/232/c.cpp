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
    int n,m;
    cin>>n>>m;
    vector<P> p(m),q(m);
    int r[n];
    rep(i,n)r[i]=i;
    rep(i,m){
        int a,b;cin>>a>>b;
        a--;b--;
        p[i]=make_pair(a,b);
    }
    rep(i,m){
        int c,d;cin>>c>>d;
        c--;d--;
        q[i]=make_pair(c,d);
    }
    do{
        vector<bool> flag(m,false);
        for(auto& [c,d]:q){
            P s;
            if(r[c]<r[d])s=make_pair(r[c],r[d]);
            else s=make_pair(r[d],r[c]);
            rep(i,m){
                if(p[i]==s)flag[i]=true;
            }
        }
        bool ans=true;
        rep(i,m)if(!flag[i])ans=false;
        if(ans){
            cout<<"Yes"<<endl;
            return 0;
        }
    }while(next_permutation(r,r+n));
    cout<<"No"<<endl;
}