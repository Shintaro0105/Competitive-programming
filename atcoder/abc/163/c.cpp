#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n,0);
    rep(i,n-1){
        int b;cin>>b;
        b--;
        a[b]++;
    }
    rep(i,n)cout<<a[i]<<endl;
    return 0;
}