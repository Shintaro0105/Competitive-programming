#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int h,w,n,m;
    cin>>h>>w>>n>>m;
    vector<int> a(n),b(n),c(m),d(m);
    vector<set<int>> bx(h),by(w);
    rep(i,n){
        cin>>a[i]>>b[i];
        a[i]--;
        b[i]--;
    }
    vector br(h,vector<bool>(w,true));
    rep(i,m){
        cin>>c[i]>>d[i];
        c[i]--;
        d[i]--;
        bx[c[i]].insert(d[i]);
        by[d[i]].insert(c[i]);
        br[c[i]][d[i]]=false;
    }
    vector x(h,vector<int>(w,0)),y(h,vector<int>(w,0));
    rep(i,n){
        auto ix=bx[a[i]].lower_bound(b[i]);
        if(ix!=bx[a[i]].end()){
            x[a[i]][*ix]--;
        }
        if(bx[a[i]].size()>0&&ix!=bx[a[i]].begin()){
            ix--;
            x[a[i]][*ix]++;
        }else{
            x[a[i]][0]++;
        }
        auto iy=by[b[i]].lower_bound(a[i]);
        //cout<<*iy<<endl;
        if(iy!=by[b[i]].end()){
            y[*iy][b[i]]--;
        }
        if(by[b[i]].size()>0&&iy!=by[b[i]].begin()){
            iy--;
            y[*iy][b[i]]++;
        }else{
            y[0][b[i]]++;
        }
    }
    rep(i,h){
        rep(j,w-1){
            x[i][j+1]+=x[i][j];
        }
    }
    rep(i,w){
        rep(j,h-1){
            y[j+1][i]+=y[j][i];
        }
    }
    int ans=0;
    rep(i,h){
        rep(j,w){
            if(br[i][j]){
                if(x[i][j]>0||y[i][j]>0){
                    //cout<<'o';
                    ans++;
                }
            }
        }
        //cout<<endl;
    }
    cout<<ans<<endl;
    return 0;
}