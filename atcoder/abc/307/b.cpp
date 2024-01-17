#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    bool flag=false;
    rep(i,n){
        rep(j,n)if(i!=j){
            bool f=true;
            string t=s[i]+s[j];
            int l=t.size();
            rep(k,l/2){
                if(t[k]!=t[l-1-k])f=false;
            }
            if(f)flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}