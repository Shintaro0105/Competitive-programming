#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main(){
    string s,t;cin>>s>>t;
    int n=s.size();
    vector<int> cnt(26,0);
    int k;
    rep(i,n){
        k=t[i]-s[i];
        if(k<0)k+=26;
        cnt[k]++;
    }
    if(cnt[k]==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}