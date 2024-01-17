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
    int n;cin>>n;
    pair<int,int> a[n];
    ll ans=0;
    rep(i,n){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    rep(i,n){
        int j=0;
        int k=a[i].first;
        while(k==a[i].first){
            if(k==a[i].first)j++;
            i++;
        }
        i--;
        rep(l,j){
            ans+=n-a[i-l].second-1-l;
        }

    }
    cout<<ans<<endl;
}