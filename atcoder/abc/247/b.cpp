#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    string s[n],t[n];
    rep(i,n){
        cin>>s[i]>>t[i];
    }
    bool flag=true;
    rep(i,n){
        bool is_oks=true,is_okt=true;
        rep(j,n){
            if(i!=j){
                if(s[i]==s[j]||s[i]==t[j])is_oks=false;
                if(t[i]==s[j]||t[i]==t[j])is_okt=false;
            }
        }
        if(!(is_oks||is_okt))flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}