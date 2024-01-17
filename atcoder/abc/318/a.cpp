#include <iostream>
using namespace std;

int main(){
    int n,m,p;cin>>n>>m>>p;
    int ans=0;
    for(int i=m;i<=n;i+=p){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}