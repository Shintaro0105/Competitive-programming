#include <iostream>
using namespace std;

int main(){
    bool flag=true;
    int s=0;
    for(int i=0;i<8;i++){
        int t;cin>>t;
        if(t<s)flag=false;
        if(t%25!=0)flag=false;
        if(t<100||675<t)flag=false;
        s=t;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}