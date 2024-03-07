#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    string res=(n%2==0)? "White" : "Black";
    cout<<res<<endl;
    return 0;
}