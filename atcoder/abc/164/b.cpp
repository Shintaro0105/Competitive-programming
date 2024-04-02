#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    bool t=true;
    while(true){
        if(t){
            c-=b;
            if(c<=0)break;
            t=false;
        }else{
            a-=d;
            if(a<=0)break;
            t=true;
        }
    }
    if(t)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}