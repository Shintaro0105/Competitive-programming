#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
        int k;cin>>k;
    rep(i,1<<k){
        cout<<i<<' ';
        int l=i;
        string s;
        rep(j,k){
            if((l&1)==1)s+='1';
            else s+='0';
            l>>=1;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}