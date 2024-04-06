#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;cin>>n;
    string s;
    rep(i,n){
        if((i+1)%3==0){
            s+='x';
        }else{
            s+='o';
        }
    }
    cout<<s<<endl;
    return 0;
}