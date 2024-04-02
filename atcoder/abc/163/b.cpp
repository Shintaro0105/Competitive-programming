#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int sum=0;
    rep(i,m){
        int a;cin>>a;
        sum+=a;
    }
    if(sum<=n)cout<<n-sum<<endl;
    else cout<<-1<<endl;
    return 0;
}