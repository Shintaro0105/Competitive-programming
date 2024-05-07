#include <iostream>
using namespace std;

int main(){
    int a=0,b=0;
    for(int i=0;i<9;i++){
        int c;cin>>c;
        a+=c;
    }
    for(int i=0;i<8;i++){
        int c;cin>>c;
        b+=c;
    }
    cout<<a-b+1<<endl;
    return 0;
}