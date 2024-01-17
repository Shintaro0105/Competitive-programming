#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int t;
    cin>>t;
    rep(ti,t){
        int n;
        cin>>n;
        int sum=0;
        rep(i,n){
            int a;
            cin>>a;
            if(a%2!=0)sum++;
        }
        cout<<sum<<'\n';
    }
    return 0;
}