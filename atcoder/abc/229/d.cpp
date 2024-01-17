#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    string s;cin>>s;
    int k;cin>>k;
    int n=s.size();
    vector<int> cnt(n+1);
    cnt[0]=0;
    rep(i,n){
        if(s[i]=='.')cnt[i+1]=cnt[i]+1;
        else cnt[i+1]=cnt[i];
    }
    int r=0,ans=0;
    rep(l,n){
        while(r<=n-1&&cnt[r+1]-cnt[l]<=k){
            r++;
        }
        ans=max(ans,r-l);
    }
    cout<<ans<<endl;
    return 0;
}