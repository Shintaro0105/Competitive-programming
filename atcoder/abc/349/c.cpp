#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s,t;cin>>s>>t;
    int j=0;
    rep(i,s.size()){
        if(s[i]-'a'==t[j]-'A'){
            j++;
            if(j==3){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    if(j==2&&t[2]=='X')cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}