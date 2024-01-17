#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n,k;cin>>n>>k;
    vector<int> D;
    rep(i,n){
        int v;cin>>v;
        D.push_back(v);
    }
    int ans=0;
    rep(l,n+1)rep(r,n+1){
        if(l+r>n)continue;
        int rest = k-(l+r);
        if(rest<0)continue;
        vector<int> a;
        rep(i,l)a.push_back(D[i]);
        rep(i,r)a.push_back(D[n-1-i]);
        int sum=0;
        for(auto &i:a)sum+=i;
        sort(a.begin(),a.end());
        int N = a.size();
        rep(i,min(rest,N)){
            if(a[i]>=0)break;
            else sum-=a[i];
        }
        ans=max(ans,sum);
    }
    cout << ans << endl;
}