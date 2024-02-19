#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int h,w,n;cin>>h>>w>>n;
    string t;cin>>t;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    string u="LRUD";
    int dx[4]={0,0,-1,1},dy[4]={-1,1,0,0};
    set<P> p;
    int nx=0,ny=0;
    p.insert(make_pair(0,0));
    rep(i,n){
        rep(j,4){
            if(t[i]==u[j]){
                nx+=dx[j];
                ny+=dy[j];
                p.insert(make_pair(nx,ny));
            }
        }
    }
    int ans=0;
    rep(i,h){
        rep(j,w){
            if(s[i][j]=='.'){
                bool flag=true;
                for(auto [x,y]:p){
                    if(0<=i+x&&i+x<h&&0<=j+y&&j+y<w){
                        if(s[i+x][j+y]=='#')flag=false;
                    }else{
                        flag=false;
                    }
                }
                if(flag)ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}