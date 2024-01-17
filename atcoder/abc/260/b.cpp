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
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<bool> ans(n,false);
    vector<P> a(n),b(n),ab(n);
    rep(i,n){
        cin>>a[i].first;
        a[i].first*=-1;
        a[i].second=i;
    }
    rep(i,n){
        cin>>b[i].first;
        b[i].first*=-1;
        b[i].second=i;
        ab[i].first=a[i].first+b[i].first;
        ab[i].second=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(ab.begin(),ab.end());
    rep(i,x){
        ans[a[i].second]=true;
    }
    int cnt=0,i=0;
    while(cnt<y){
        if(!ans[b[i].second]){
            ans[b[i].second]=true;
            i++;cnt++;
        }else{
            i++;
        }
    }
    cnt=0;i=0;
    while(cnt<z){
        if(!ans[ab[i].second]){
            ans[ab[i].second]=true;
            i++;cnt++;
        }else{
            i++;
        }
    }
    rep(i,n){
        if(ans[i]){
            cout<<i+1<<endl;
        }
    }
    return 0;
}