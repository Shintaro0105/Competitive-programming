#include <iostream>
using namespace std;

int main(){
    long long a,b,k;
    cin>>a>>b>>k;
    int cnt=0;
    while(a<b){
        a*=k;
        cnt++;
    }
    cout<<cnt<<endl;
}