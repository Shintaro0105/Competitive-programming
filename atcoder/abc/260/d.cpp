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
    int n,k;cin>>n>>k;
    set<int> tops;
    vector<int> nxt(n,-1),num(n);
    vector<int> ans(n,-1);
    rep(ni,n){
        int p;cin>>p;
        p--;
        auto it = tops.lower_bound(p);
        if(it==tops.end()){
            num[p]=1;
        }else{
            int i=*it;
            tops.erase(it);
            nxt[p]=i;num[p]=num[i]+1;
        }
        if(num[p]==k){
            int i=p;
            while(i!=-1){
                ans[i]=ni+1;
                i=nxt[i];
            }
        }else{
            tops.insert(p);
        }
    }
    rep(i,n)cout<<ans[i]<<'\n';
    return 0;
}