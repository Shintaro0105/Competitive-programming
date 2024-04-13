#include <iostream>
using namespace std;

int main(){
    int a,b;cin>>a>>b;
    for(int i=10;i<=1250;i++){
        if((int)(i*0.08)==a&&(int)(i*0.1)==b){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}