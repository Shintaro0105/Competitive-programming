#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0;
    rep(i,n){
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}