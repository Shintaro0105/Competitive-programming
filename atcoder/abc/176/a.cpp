#include <iostream>
using namespace std;

int main(){
    int n,x,t;cin>>n>>x>>t;
    if(n%x==0){
        cout << t*(n/x) << endl;
    }
    else{
        cout << t*(n/x+1) << endl;
    }
    return 0;
}