#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    map<int,int> em,om;
    rep(i,n){
        cin>>v[i];
        if(i%2==0){
            em[v[i]]++;
        }else{
            om[v[i]]++;
        }
    }
    vector<P> ep,op;
    int ans=0;
    for(auto &i:em){
        ep.push_back({i.second,i.first});
    }
    for(auto &i:om){
        op.push_back({i.second,i.first});
    }
    sort(ep.rbegin(),ep.rend());
    sort(op.rbegin(),op.rend());
    int en=ep.size(),on=op.size();
    if(ep[0].second!=op[0].second){
        rep(i,en-1)ans+=ep[i+1].first;
        rep(i,on-1)ans+=op[i+1].first;
    }else{
        int sum1=ep[0].first,sum2=op[0].first;
        rep(i,en-2)sum1+=ep[i+2].first;
        rep(i,on-1)sum1+=op[i+1].first;
        rep(i,en-1)sum2+=ep[i+1].first;
        rep(i,on-2)sum2+=op[i+2].first;
        ans=min(sum1,sum2);
    }
    cout<<ans<<endl;
    return 0;
}