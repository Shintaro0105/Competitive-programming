#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int n,m;

void func(int i,int *s){
    if(i==n-1){
        rep(i,n-1)cout<<s[i]<<' ';
        cout<<s[n-1]<<'\n';
    }else{
        for(int j=s[i];j<m;j++){
            s[i+1]=j+1;
            func(i+1,s);
        }
    }
}

int main(){
    cin>>n>>m;
    rep(i,m){
        int s[n];
        s[0]=i+1;
        func(0,s);
    }
    return 0;
}