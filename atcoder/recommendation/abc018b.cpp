#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string t;
    cin>>t;
    char s[t.size()];
    rep(i,t.size()){
        s[i]=t[i];
    }
    int n;cin>>n;
    rep(i,n){
        int l,r;
        cin>>l>>r;
        l--;
        reverse(s+l,s+r);
    }
    rep(i,t.size()){
        cout<<s[i];
    }
    cout<<endl;
}