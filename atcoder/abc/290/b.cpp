#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s,t;
    cin>>s;
    rep(i,n){
        if(s[i]=='o'){
            if(k>0){
                t+='o';
                k--;
            }else{
                t+='x';
            }
        }else{
            t+='x';
        }
    }
    cout<<t<<endl;
    return 0;
}