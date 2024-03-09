#include <iostream>
using namespace std;

int main(){
    string s,t;cin>>s;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i]!='|'&&flag)t+=s[i];
        if(s[i]=='|'&&flag){
            flag=false;
        }else if(s[i]=='|'&&!flag){
            flag=true;
        }
    }
    cout<<t<<endl;
    return 0;
}