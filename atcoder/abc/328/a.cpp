#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int s[n];
    int ans=0;
    for(int i:s){
        cin>>i;
        if(i<=x)ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}