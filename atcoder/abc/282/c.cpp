#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    bool f=true;
    rep(i,n){
        if(s[i]==','&&f){
            s[i]='.';
        }else if(s[i]=='"'&&f){
            f=false;
        }else if(s[i]=='"'&&!f){
            f=true;
        }
    }
    cout<<s<<endl;
    return 0;
}