#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n),cnt(9,0);
    rep(i,n){
        cin>>a[i];
        cnt[min(a[i]/400,8)]++;
    }
    int sum=0;
    rep(i,8){
        if(cnt[i]>0)sum++;
    }
    if(cnt[8]==0){
        cout<<sum<<' '<<sum<<endl;
    }else{
        cout<<max(1,sum)<<' '<<sum+cnt[8]<<endl;
    }
    return 0;
}