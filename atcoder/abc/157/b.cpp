#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    vector a(3,vector<int>(3));
    map<int,P> mp;
    rep(i,3)rep(j,3){
        cin >> a[i][j];
        mp[a[i][j]]={i,j};
    }
    vector f(3,vector<bool>(3,false));
    int n;cin>>n;
    rep(i,n){
        int b;cin>>b;
        if(mp.count(b))f[mp[b].first][mp[b].second]=true;
    }
    bool flag=false;
    rep(i,3){
        bool ok=true;
        rep(j,3)ok&=f[i][j];
        if(ok)flag=true;
    }
    rep(j,3){
        bool ok=true;
        rep(i,3)ok&=f[i][j];
        if(ok)flag=true;
    }
    bool ok=true;
    rep(i,3){
        ok&=f[i][i];
    }
    if(ok)flag=true;
    ok=true;
    rep(i,3){
        ok&=f[i][2-i];
    }
    if(ok)flag=true;
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}