#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using P = pair<int,int>;

int main(){
    int h,w;cin>>h>>w;
    int m;cin>>m;
    map<P,int> mp;
    map<int,int> r,c;
    rep(i,m){
        int h,w;
        cin>>h>>w;
        h--;w--;
        mp[{h,w}]=1;
        r[h]++;
        c[w]++;
    }
    int ans=0;
    vector<P> rn,cn;
    for(auto x:r){
        rn.push_back({x.second,x.first});
    }
    for(auto x:c){
        cn.push_back({x.second,x.first});
    }
    sort(ALL(rn),greater<P>());
    sort(ALL(cn),greater<P>());
    rep(i,rn.size()){
        rep(j,cn.size()){
            if(cn[j].first<cn[0].first)break;
            if(mp.count({rn[i].second,cn[j].second})){
                ans=max(ans,rn[i].first+cn[j].first-1);
            }else{
                ans=max(ans,rn[i].first+cn[j].first);
                cout<<ans<<endl;
                return 0;
            }
        }
        if(rn[i].first<rn[0].first){
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}