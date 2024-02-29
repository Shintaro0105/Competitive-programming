#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    double x;cin>>x;
    x*=100;
    double sum=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        double v,p;cin>>v>>p;
        sum+=v*p;
        if(sum>x&&ans<0){
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}