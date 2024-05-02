#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    rep(i,n){
        cin>>a[i];
        a[i]--;
        mp[a[i]]=i;
    }
    vector<P> ans;
    rep(i,n){
        if(mp[i]!=i){
            if(mp[i]<i)ans.push_back({mp[i],i});
            else ans.push_back({i,mp[i]});
            swap(a[mp[i]],a[i]);
            mp[a[mp[i]]]=mp[i];
            mp[a[i]]=i;
        }
    }
    cout<<ans.size()<<endl;
    rep(i,ans.size())cout<<ans[i].first+1<<' '<<ans[i].second+1<<endl;
    return 0;
}