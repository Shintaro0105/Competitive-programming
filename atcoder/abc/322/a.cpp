#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    rep(i,n-2){
        string t;
        rep(j,3){
            t+=s[i+j];
        }
        if(t=="ABC"){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}