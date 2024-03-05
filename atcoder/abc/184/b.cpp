#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,x;cin>>n>>x;
    string s;cin>>s;
    rep(i,n){
        if(s[i]=='o'){
            x++;
        }else{
            x=max(x-1,0);
        }
    }
    cout<<x<<endl;
    return 0;
}