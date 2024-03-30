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

int n,m,q;
vector<int> a(q),b(q),c(q),d(q);
vector<int> v(10,1);
int ans=0;

void dfs(int now=0, int p = 1){
    if(now==n){
        int sum=0;
        rep(i,q){
            if(v[b[i]]-v[a[i]]==c[i])sum+=d[i];
        }
        ans=max(ans,sum);
    }else{
        for(int i=p;i<=m;i++){
            v[now]=i;
            dfs(now+1,i);
        }
    }
}

int main(){
    cin >> n >> m >> q;
    a.resize(q);b.resize(q);c.resize(q);d.resize(q);
    rep(i,q){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--;
        b[i]--;
    }
    dfs();
    cout << ans << endl;
    return 0;
}