#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> s(n+1);
    s[0]=0;
    rep(i,n)cin>>s[i+1];
    rep(i,n-1){
        cout<<s[i+1]-s[i]<<' ';
    }
    cout<<s[n]-s[n-1]<<endl;
    return 0;
}