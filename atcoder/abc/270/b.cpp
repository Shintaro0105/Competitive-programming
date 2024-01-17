#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x<0){
        x*=-1;
        y*=-1;
        z*=-1;
    }
    bool flag=true;
    if(x>0){
        if(0<y&&y<x){
            if(0<z&&z<y){
                cout<<x<<endl;
                flag=false;
            }else if(z<0){
                cout<<x-2*z<<endl;
                flag=false;
            }
        }else{
            cout<<x<<endl;
            flag=false;
        }
    }else{
        cout<<x<<endl;
        flag=false;
    }
    if(flag)cout<<-1<<endl;
    return 0;
}