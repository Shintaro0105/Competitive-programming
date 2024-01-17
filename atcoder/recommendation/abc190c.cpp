#include <iostream>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m),b(m);
    rep(i,m)cin>>a[i]>>b[i];
    int k;
    cin>>k;
    vector<int> c(k),d(k);
    rep(i,k)cin>>c[i]>>d[i];
    int ans=0;
    rep(i,1<<k){
        int l=i;
        vector<bool> f(n+1,false);
        rep(j,k){
            if((l&1)==1)f[c[j]]=true;
            else f[d[j]]=true;
            l>>=1;
        }
        int sum=0;
        rep(j,m){
            if(f[a[j]]&&f[b[j]])sum++;
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}