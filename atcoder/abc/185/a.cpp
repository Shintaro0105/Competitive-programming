#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    vector<int> a(4);
    int ans=1e9;
    rep(i,4){
        cin>>a[i];
        ans=min(a[i],ans);
    }
    cout<<ans<<endl;
    return 0;
}