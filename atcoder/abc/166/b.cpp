#include<iostream>
#include<vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<bool> ok(n,false);
    rep(i,k){
        int d;cin>>d;
        rep(j,d){
            int a;cin>>a;
            a--;
            ok[a]=true;
        }
    }
    int cnt=0;
    rep(i,n){
        if(!ok[i])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}