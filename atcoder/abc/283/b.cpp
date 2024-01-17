#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int q;cin>>q;
    rep(i,q){
        int t,k;
        cin>>t>>k;
        k--;
        if(t==1){
            int x;cin>>x;
            a[k]=x;
        }else{
            cout<<a[k]<<'\n';
        }
    }
    return 0;
}