#include <iostream>
using namespace std;

int main(){
    int M,D,y,m,d;cin>>M>>D>>y>>m>>d;
    if(d==D){
        if(m==M){
            cout<<y+1<<' '<<1<<' '<<1<<endl;
        }else{
            cout<<y<<' '<<m+1<<' '<<1<<endl;
        }
    }else{
        cout<<y<<' '<<m<<' '<<d+1<<endl;
    }
    return 0;
}