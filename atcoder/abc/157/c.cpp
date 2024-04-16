#include <iostream>
#include <vector>
#include <cmath>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> s(m),c(m);
    rep(i,m){
        cin>>s[i]>>c[i];
        s[i]--;
    }
    for(int i=(n==1)?0:pow(10,n-1);i<pow(10,n);i++){
        vector<int> a(n);
        int tmp=i;
        rep(j,n)a[n-1-j]=tmp%10,tmp/=10;
        bool ok=true;
        rep(j,m){
            if(a[s[j]]!=c[j])ok=false;
        }
        if(ok){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}