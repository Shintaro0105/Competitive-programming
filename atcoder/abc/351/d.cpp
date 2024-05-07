#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int h,w;cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    vector ng(h,vector<bool>(w,false));
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    rep(i,h)rep(j,w){
        if(s[i][j]=='#'){
            rep(k,4){
                int nx=i+dx[k],ny=j+dy[k];
                if(0<=nx&&nx<h&&0<=ny&&ny<w){
                    ng[nx][ny]=true;
                }
            }
            //ng[i][j]=true;
        }
    }
    dsu uf(h*w);
    rep(i,h)rep(j,w){
        if(ng[i][j])continue;
        if(s[i][j]=='.'){
            rep(k,4){
                int nx=i+dx[k],ny=j+dy[k];
                if(0<=nx&&nx<h&&0<=ny&&ny<w){
                    if(s[nx][ny]=='.'){
                        if(!ng[nx][ny])uf.merge(i*w+j,nx*w+ny);
                    }
                }
            }
        }
    }
    int ans=0;
    auto res=uf.groups();
    for(auto v:res){
        int cnt=v.size();
        set<int> st;
        for(auto x:v){
            if(ng[x/w][x%w]||s[x/w][x%w]=='#')break;
            rep(k,4){
                int nx=x/w+dx[k],ny=x%w+dy[k];
                if(0<=nx&&nx<h&&0<=ny&&ny<w){
                    if(ng[nx][ny])st.insert(nx*w+ny);
                }
            }
        }
        ans=max(ans,cnt+(int)st.size());
    }
    cout<<ans<<endl;
    return 0;
}