#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> p(n);
    rep(i,n){
        int P;cin>>P;
        P--;
        p[P]=i;
    }
    int q;cin>>q;
    rep(i,q){
        int a,b;cin>>a>>b;
        a--;b--;
        if(p[a]<p[b])cout<<a+1<<endl;
        else cout<<b+1<<endl;
    }
    return 0;
}