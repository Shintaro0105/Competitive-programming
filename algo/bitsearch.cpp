#include <iostream>
#include <algorithm>
#include <string>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
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
        reverse(ALL(s));
        cout<<s<<endl;
    }
    return 0;
}