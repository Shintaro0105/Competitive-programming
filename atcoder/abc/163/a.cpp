#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double pi=acos(-1);

int main(){
    double r;cin>>r;
    cout<<fixed<<setprecision(10)<<pi*r*2<<endl;
    return 0;
}