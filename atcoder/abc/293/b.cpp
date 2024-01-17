#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> b(n,true);
    rep(i,n){
        int a;cin>>a;
        a--;
        if(b[i])b[a]=false;
    }
    vector<int> ans;
    rep(i,n){
        if(b[i])ans.push_back(i+1);
    }
    sort(ans.begin(),ans.end());
    int k=ans.size();
    cout<<k<<endl;
    rep(i,k-1){
        cout<<ans[i]<<' ';
    }
    cout<<ans[k-1]<<endl;
    return 0;
}