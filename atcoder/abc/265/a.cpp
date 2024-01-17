#include <iostream>
using namespace std;

int main(){
    int x,y,n;
    cin>>x>>y>>n;
    if(x>y/3)cout<<(n/3)*y+(n%3)*x<<endl;
    else cout<<n*x<<endl;
    return 0;
}