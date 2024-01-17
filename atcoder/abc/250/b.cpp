#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    char ans[n*a][n*b];
    rep(i,n)rep(j,n){
        char c;
        if((i+j)%2!=0)c='#';
        else c='.';
        rep(k,a)rep(l,b){
            ans[a*i+k][b*j+l]=c;
        }
    }
    rep(i,n*a){
        rep(j,n*b){
        cout<<ans[i][j];
        }
        cout<<'\n';
    }
    return 0;
}