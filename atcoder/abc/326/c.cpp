#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    sort(ALL(a));
    int ans=0;
    for(auto i=a.begin();i<a.end();i++){
        auto j=lower_bound(ALL(a),*i+m);
        ans=max(ans,(int)(j-i));
    }
    cout<<ans<<endl;
    return 0;
}