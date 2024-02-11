#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0;
    while(n!=0){
        if(n%2==0){
            sum++;
        }else{
            break;
        }
        n/=2;
    }
    cout<<sum<<endl;
    return 0;
}