#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll x;cin>>x;
    if(x>=0)cout<<(x+9)/10<<endl;
    else cout<<x/10<<endl;
    return 0;
}