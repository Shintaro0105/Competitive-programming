#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>> g(n);
    rep(i,n){
        rep(j,n){
            int a;cin>>a;
            if(a==1)g[i].push_back(j);
        }
    }
    rep(i,n){
        for(int j:g[i]){
            cout<<j+1<<' ';
        }
        cout<<endl;
    }
    return 0;
}