#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m+1];
    rep(i,m+1)b[i]=0;
    rep(i,n){
        cin>>a[i];
        b[a[i]]++;
    }
    rep(i,m+1){
        if(b[i]>n/2){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<'?'<<endl;
    return 0;
}