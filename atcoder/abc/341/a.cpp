#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string s;
    for(int i=0;i<2*n+1;i++){
        if(i%2==0){
            s+='1';
        }else{
            s+='0';
        }
    }
    cout<<s<<endl;
    return 0;
}