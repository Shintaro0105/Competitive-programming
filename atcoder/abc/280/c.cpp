#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int ans=n+1;
    int c=0;
    rep(i,n){
        if(s[i]!=t[i+c]){
            ans=i;
            break;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}