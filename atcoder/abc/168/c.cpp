#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi=acos(-1);

int main(){
    double a,b,h,m;cin>>a>>b>>h>>m;
    double ax=a*cos((h*60+m)/720.0*2*pi),ay=a*sin((h*60+m)/720.0*2*pi);
    double bx=b*cos(m/60.0*2*pi),by=b*sin(m/60.0*2*pi);
    cout<<fixed<<setprecision(10)<<sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))<<endl;
    return 0;
}