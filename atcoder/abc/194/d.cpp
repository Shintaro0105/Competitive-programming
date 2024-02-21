#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n;cin>>n;
    double ans=0;
    for(double i=1;i<=n-1;i++){
        ans+=n/(n-i);
    }
    cout<<fixed<<setprecision(15)<<ans<<endl;
    return 0;
}