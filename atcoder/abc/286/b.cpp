#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    string t;
    rep(i,n){
        if(s[i]=='n'&&i!=n-1){
            if(s[i+1]=='a'){
                t+="nya";
                i++;
            }else{
                t+='n';
            }
        }else{
            t+=s[i];
        }
    }
    cout<<t<<endl;
    return 0;
}