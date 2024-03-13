#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint1000000007;

int main(){
    int n;cin>>n;
    mint a=1,b=1,c=1;
    rep(i,n){
        a*=10;
        b*=9;
        c*=8;
    }
    mint ans=a-2*b+c;
    cout<<ans.val()<<endl;
    return 0;
}