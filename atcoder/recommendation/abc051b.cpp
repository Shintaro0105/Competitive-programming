#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int k,s;
    cin>>k>>s;
    int sum=0;
    rep(x,k+1){
        rep(y,k+1){
            if(0<=s-x-y&&s-x-y<=k){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}