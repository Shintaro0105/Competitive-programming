#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    bool flag=true;
    for(int i=1;i<16;i+=2){
        if(s[i]=='1')flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}