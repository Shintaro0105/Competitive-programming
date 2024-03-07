#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sx,sy,gx,gy;
    cin>>sx>>sy>>gx>>gy;
    cout<<fixed<<setprecision(10)<<(sy*gx+gy*sx)/(gy+sy)<<endl;
}