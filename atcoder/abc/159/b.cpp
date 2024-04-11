#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;cin>>s;
    int n=s.size();
    bool flag=true;
    rep(i,n/2){
        if(s[i]!=s[n-1-i]){
            flag=false;
        }
    }
    rep(i,n/4){
        if(s[i]!=s[n/2-1-i]){
            flag=false;
        }
        if(s[n/2+1+i]!=s[n-1-i]){
            flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}