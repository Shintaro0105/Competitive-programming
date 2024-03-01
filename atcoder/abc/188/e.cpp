#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    vector<int> x(m),y(m);
    vector<vector<int>> g(n);
    rep(i,m){
        cin>>x[i]>>y[i];
        x[i]--;y[i]--;
        g[y[i]].push_back(x[i]);
    }
    vector<int> b(n);
    vector<bool> seen(n,false);
    rep(i,n)b[i]=a[i];
    for(int i=n-1;i>0;i--){
        for(int j:g[i]){
            if(seen[j])b[j]=max(b[j],max(b[i],a[i]));
            else{
                seen[j]=true;
                b[j]=max(b[i],a[i]);
            }
        }
    }
    int ans=-1e9-1;
    rep(i,n-1){
        if(seen[i])ans=max(ans,b[i]-a[i]);
        //cout<<a[i]<<' '<<b[i]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}