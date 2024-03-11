#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt=0;
    for(int a=1;a<=n;a++){
        for(int b=1;a*b<=n;b++){
            if(a*b<n)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}