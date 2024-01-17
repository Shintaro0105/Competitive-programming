#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a)  (a).begin(),(a).end()
using namespace std;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    map<string,int> mp;
    rep(i,n){
        cin>>s[i];
        mp[s[i]]++;
        reverse(ALL(s[i]));
        mp[s[i]]++;
    }
    int cnt1=0,cnt2=0;
    for(auto i:mp){
        bool flag=true;
        string t=i.first;
        int l=t.size();
        rep(j,l/2){
            if(t[j]!=t[l-1-j])flag=false;
        }
        if(flag)cnt1++;
        else cnt2++;
    }
    cout<<cnt1+cnt2/2<<endl;
    return 0;
}