#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ans(2*n+1);
    ans[0]=0;
    rep(i,n){
        int a;
        cin>>a;
        a--;
        ans[2*i+1]=ans[a]+1;
        ans[2*i+2]=ans[a]+1;
    }
    rep(i,2*n+1){
        cout<<ans[i]<<'\n';
    }
    return 0;
}