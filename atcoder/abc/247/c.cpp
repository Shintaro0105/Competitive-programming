#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>> ans(n);
    ans[0].push_back(1);
    rep(i,n-1){
        for(int j:ans[i])ans[i+1].push_back(j);
        ans[i+1].push_back(i+2);
        for(int j:ans[i])ans[i+1].push_back(j);
    }
    int l=ans[n-1].size();
    rep(i,l-1) cout<<ans[n-1][i]<<' ';
    cout<<ans[n-1][l-1]<<endl;
    return 0;
}