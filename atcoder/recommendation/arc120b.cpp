#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
const int mod=998244353;

int main(){
    int h,w;
    cin>>h>>w;
    vector<string> s(h);
    rep(i,h)cin>>s[i];
    ll ans=1;
    map<char,int> mp;
    mp['R']=0;
    mp['B']=0;
    mp['.']=0;
    rep(i,h+w-1){
        mp['R']=0;
        mp['B']=0;
        mp['.']=0;
        rep(j,h){
            if(0<=i-j&&i-j<w)mp[s[j][i-j]]++;
        }
        if(mp['R']==0&&mp['B']==0)ans*=2;
        else if(mp['R']>0&&mp['B']>0)ans=0;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}