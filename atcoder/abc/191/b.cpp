#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,x;cin>>n>>x;
    rep(i,n){
        int ai;
        cin>>ai;
        if(ai!=x){
            cout<<ai<<' ';
        }
    }
    cout<<endl;
    return 0;
}