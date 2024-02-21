#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n),b(n+1,0);
    rep(i,n)cin>>a[i];
    rep(i,m){
        b[a[i]]++;
    }
    set<int> s;
    rep(i,n+1){
        if(b[i]==0)s.insert(i);
    }
    int ans=*s.begin();
    rep(i,n-m){
        b[a[i]]--;
        if(b[a[i]]==0)s.insert(a[i]);
        b[a[i+m]]++;
        s.erase(a[i+m]);
        ans=min(ans,*s.begin());
    }
    cout<<ans<<endl;
    return 0;
}