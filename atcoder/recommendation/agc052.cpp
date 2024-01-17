#include <iostream>
#include <string>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int t;cin>>t;
    rep(ti,t){
        int n;cin>>n;
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        rep(i,n)cout<<'0';
        rep(i,n)cout<<'1';
        cout<<'0'<<'\n';
    }
    return 0;
}