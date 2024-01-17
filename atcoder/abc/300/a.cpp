#include <iostream>
using namespace std;

int main(){
    int n,a,b;cin>>n>>a>>b;
    int c[n];
    int ans=1;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(c[i]==a+b){
            ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}