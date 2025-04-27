#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,m,q;cin >> n >> m >> q;
    vector<set<int>> s(n);
    rep(i,q){
        int t;cin>>t;
        if(t==2){
            int x;cin>>x;
            x--;
            s[x].insert(0);
        }else{
            int x,y;cin>>x>>y;
            x--;
            if(t==1){
                s[x].insert(y);
            }else{
                if(s[x].find(0)!=s[x].end()||s[x].find(y)!=s[x].end())cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
    }
    return 0;
}