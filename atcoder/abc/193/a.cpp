#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;cin>>a>>b;
    cout<<fixed<<setprecision(15)<<100.0*(a-b)/a<<endl;
    return 0;
}