#include<iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    int a;cin>>a;
    rep(i,n-1){
        int b;cin>>b;
        cout<<a*b<<' ';
        a=b;
    }
    cout<<endl;
    return 0;
}