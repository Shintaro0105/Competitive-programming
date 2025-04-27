#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

//wrong

int main(){
    int n,d;cin>>n>>d;
    vector<int> a(n);
    map<int,vector<int>> mp;
    rep(i,n){
        cin>>a[i];
        mp[a[i]].push_back(i);
    }

    return 0;
}