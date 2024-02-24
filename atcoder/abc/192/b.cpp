#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;cin>>s;
    bool flag=true;
    rep(i,s.size()){
        if(i%2==0){
            if(!('a'<=s[i]&&s[i]<='z'))flag=false;
        }else{
            if(!('A'<=s[i]&&s[i]<='Z'))flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}