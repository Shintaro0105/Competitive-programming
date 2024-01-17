#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    int a[h][w];
    rep(i,h)rep(j,w)cin>>a[i][j];
    int ans=0;
    rep(i,1L<<(h+w-2)){
        int ni=0,nj=0;
        set<int> s;
        s.insert(a[ni][nj]);
        int sum=0;
        rep(j,h+w-2){
            if(i>>j&1)sum++;
        }
        if(sum==h-1){
            rep(j,h+w-2){
                if(i>>j&1){
                    ni++;
                    s.insert(a[ni][nj]);
                }else{
                    nj++;
                    s.insert(a[ni][nj]);
                }
            }
            if(s.size()==h+w-1)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}