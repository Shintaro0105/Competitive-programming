#include <iostream>
#include <vector>
#include <map>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    vector<string> s(4);
    s={"AC","WA","TLE","RE"};
    map<string,int> mp;
    rep(i,4)mp[s[i]]=0;
    int n;cin>>n;
    rep(i,n){
        string t;cin>>t;
        mp[t]++;
    }
    rep(i,4){
        cout<<s[i]<<" x "<<mp[s[i]]<<endl;
    }
    return 0;
}