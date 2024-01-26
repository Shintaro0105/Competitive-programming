#include <iostream>
using namespace std;

int main(){
    int x,y;cin>>x>>y;
    bool flag=true;
    if(x<y){
        if(x+2<y)flag=false;
    }else{
        if(x>y+3)flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}