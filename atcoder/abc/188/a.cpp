#include <iostream>
using namespace std;

int main(){
    int x,y;cin>>x>>y;
    if(min(x,y)+3>max(x,y))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}