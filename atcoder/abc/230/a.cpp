#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    if(1<=n&&n<10){
        cout<<"AGC00"<<n<<endl;
    }else if(10<=n&&n<42){
        cout<<"AGC0"<<n<<endl;
    }else{
        cout<<"AGC0"<<n+1<<endl;
    }
}