#include <iostream>
using namespace std;
using ull = unsigned long long;

int main(){
    ull ans=0;
    for(int j=0;j<=63;j++){
        ull a;cin>>a;
        ans+=a<<j;
    }
    cout<<ans<<endl;
    return 0;
}