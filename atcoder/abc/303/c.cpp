#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int n,m,h,k;
    cin>>n>>m>>h>>k;
    string s;cin>>s;
    vector<int> x(m),y(m);
    map<P,int> mp;
    rep(i,m){
        cin>>x[i]>>y[i];
        mp[make_pair(x[i],y[i])]=1;
    }
    int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
    string t="RLUD";
    int cnt=0,nx=0,ny=0;
    rep(i,n){
        if(h>=0){
            rep(j,4){
                if(t[j]==s[i]){
                    nx+=dx[j];
                    ny+=dy[j];
                }
            }
            h--;
            if(h==-1)break;
            cnt++;
            if(h<k&&mp[make_pair(nx,ny)]==1){
                h=k;
                mp[make_pair(nx,ny)]--;
            }
        }
    }
    if(cnt==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}