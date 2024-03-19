#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w,k;cin>>h>>w>>k;
    vector<string> c(h);
    int b=0;
    rep(i,h){
        cin>>c[i];
    }
    rep(i,h){
        rep(j,w){
            if(c[i][j]=='#')b++;
        }
    }
    int ans=0;
    rep(i,1<<h){
        rep(j,1<<w){
            int cnt=0;
            rep(x,h){
                rep(y,w){
                    if((i>>x)&1||(j>>y)&1){
                        if(c[x][y]=='#')cnt++;
                    }
                }
            }
            if(b-cnt==k)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}