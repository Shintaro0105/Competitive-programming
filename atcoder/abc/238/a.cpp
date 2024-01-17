#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double n;cin>>n;
    if(n*log(2)>2*log(n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}