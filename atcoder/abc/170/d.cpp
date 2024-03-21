#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    rep(i,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    int ans=0;
    rep(i,n){
        bool flag=true;
        int N=a[i];
        for(int j=1;j*j<=N;j++){
            if(j==1){
                if(mp.count(j))flag=false;
                if(mp[N]>1)flag=false;
                continue;
            }
            if(N%j==0){
                if(mp.count(j))flag=false;
                if(mp.count(N/j))flag=false;
            }
        }
        if(N==1)if(mp[N]==1)flag=true;
        if(flag)ans++;
    }
    cout<<ans<<endl;
    return 0;
}