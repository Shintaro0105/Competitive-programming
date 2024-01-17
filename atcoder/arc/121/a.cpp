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
using namespace std;
using ll = long long int;
pair <ll,int> x[200000];
pair <ll,int> y[200000];

bool func(int a,int b){
    
    if(x[a].second==y[a].second&&x[b].second==y[b].second||x[a].second==y[b].second&&x[b].second==y[a].second){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;cin >> n;
    for(int i=0;i<n;i++){
        cin >> x[i].first;
        cin >> y[i].first;
        x[i].second = i;
        y[i].second = i;
    }
    sort(x,x+n);sort(y,y+n);
    ll ans,res1,res2;
    
    ll x1,x2,y1,y2;
    x1=abs(x[0].first-x[n-2].first);
    x2=abs(x[1].first-x[n-1].first);
    y1=abs(y[0].first-y[n-2].first);
    y2=abs(y[1].first-y[n-1].first);
    res1 = max({x1,x2,y1,y2});
    
    ll c,d;
    c=abs(x[0].first-x[n-1].first);
    d=abs(y[0].first-y[n-1].first);
    res2 = min(c,d);
    if(func(0,n-1)&&c==d)res2=0;
    ans = max(res1,res2);
    printf("%lld\n",ans);
}