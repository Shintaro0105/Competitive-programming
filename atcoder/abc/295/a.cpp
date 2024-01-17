#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<string> w(n);
    rep(i,n)cin>>w[i];
    bool flag=false;
    rep(i,n){
        if(w[i]=="and"||w[i]=="not"||w[i]=="that"||w[i]=="the"||w[i]=="you")flag=true;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}