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
    ll n,q;cin>>n>>q;
    ll nil=-1;
    vector<ll>front(n+1,nil); // front[i] := 電車iの前部に連結している電車。ないならnil。
    vector<ll>back(n+1,nil);  // back[i]  := 電車iの後部に連結している電車。ないならnil。
    while(q--){
        ll c;cin>>c;
        if(c==1){
            ll x,y;cin>>x>>y;
            back[x] = y;
            front[y] = x;
        }else if(c==2){
            ll x,y;cin>>x>>y;
            back[x] = nil;
            front[y] = nil;
        }else{
            ll x;cin>>x;
            while(front[x] != nil){
                x = front[x]; // xの連結成分の、先頭に移動
            }
            vector<ll>ans;
            while(x != nil){
                ans.push_back(x);
                x = back[x];
            }
            cout<<ans.size()<<" ";
            for(ll i=0;i<=(int)ans.size()-1;i++){
                cout<<ans[i];
                if(i!=(int)ans.size()-1)cout<<" ";
                else cout<<endl;
            }
        }
    }

    return 0;
}