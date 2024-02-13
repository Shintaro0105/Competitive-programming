#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    bool flag=true;
    char t='A';
    for(int i=0;i<s.size();i++){
        if(s[i]==t+1){
            t+=1;
        }else if(s[i]==t+2){
            t+=2;
        }else if(s[i]!=t){
            flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}