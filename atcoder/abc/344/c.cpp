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
    int n,m,l;cin>>n;
    map<int,int> mp;
    rep(i,n){
        int a;cin>>a;
        mp[a]++;
    }
    map<int,int> tmp=mp;
    mp.clear();
    cin>>m;
    rep(i,m){
        int a;cin>>a;
        for(auto p:tmp){
            mp[p.first+a]++;
        }
    }
    tmp=mp;
    cin>>l;
    mp.clear();
    rep(i,l){
        int a;cin>>a;
        for(auto p:tmp){
            mp[p.first+a]++;
        }
    }
    int q;cin>>q;
    rep(i,q){
        int x;cin>>x;
        if(mp.count(x))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}