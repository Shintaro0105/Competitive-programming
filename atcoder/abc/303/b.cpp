#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int  main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(m,vector<int>(n));
    vector<vector<bool>> c(n,vector<bool>(n,false));
    rep(i,n){
        c[i][i]=true;
    }
    rep(i,m){
        rep(j,n){
            cin>>a[i][j];
            a[i][j]--;
            if(0<j){
                c[a[i][j]][a[i][j-1]]=true;
                c[a[i][j-1]][a[i][j]]=true;
            }
        }
    }
    int cnt=0;
    rep(i,n){
        rep(j,n){
            if(!c[i][j])cnt++;
        }
    }
    cout<<cnt/2<<endl;
    return 0;
}