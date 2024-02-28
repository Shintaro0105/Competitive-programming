#include <iostream>
using namespace std;

int main(){
    int n,s,d;cin>>n>>s>>d;
    bool flag=false;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        if(x<s&&y>d){
            flag=true;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}