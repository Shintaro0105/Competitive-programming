#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    int ans=0,ansnum;
    for(int i=2;i<=1000;i++){
        int k=0;
        rep(j,n){
            if(a[j]%i==0)k++;
        }
        ans=max(ans,k);
        if(ans==k)ansnum=i;
    }
    cout<<ansnum<<endl;
    return 0;
}