#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    bool flag=false;
    while(n){
        if(n%10==7)flag=true;
        n/=10;
    }
    if(flag)cout<<"Yes"<<endl;  
    else cout<<"No"<<endl;
    return 0;
}