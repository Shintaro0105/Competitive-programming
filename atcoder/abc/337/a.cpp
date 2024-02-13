#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int sx=0,sy=0;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        sx+=x;
        sy+=y;
    }
    if(sx>sy){
        cout<<"Takahashi"<<endl;
    }else if(sy>sx){
        cout<<"Aoki"<<endl;
    }else{
        cout<<"Draw"<<endl;
    }
    return 0;
}