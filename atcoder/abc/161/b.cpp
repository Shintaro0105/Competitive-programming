#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    int sum=0;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
    }
    int cnt=0;
    rep(i,n){
        if(a[i]*4*m>=sum)cnt++;
    }
    if(cnt>=m)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}