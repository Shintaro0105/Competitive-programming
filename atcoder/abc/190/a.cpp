#include <iostream>
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    bool flag;
    if(a>b){
        flag=true;
    }else if(a==b){
        if(c==0)flag=false;
        else flag=true;
    }else{
        flag=false;
    }
    if(flag)cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
}