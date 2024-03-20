#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> p(n);
    rep(i,n)cin>>p[i];
    sort(ALL(p));
    int ans=0;
    rep(i,k)ans+=p[i];
    cout<<ans<<endl;
    return 0;
}