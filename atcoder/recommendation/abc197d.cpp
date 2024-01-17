#include <iostream>
#include <cmath>
using namespace std;
const double pi=3.1415926535;

int main(){
    double n;
    cin>>n;
    double x0,y0,xh,yh;
    cin>>x0>>y0>>xh>>yh;
    double x=(x0+xh)/2,y=(y0+yh)/2;
    double t=2*pi/n;
    double x1,y1;
    x1=(x0-x)*cos(t)-(y0-y)*sin(t)+x;
    y1=(x0-x)*sin(t)+(y0-y)*cos(t)+y;
    printf("%.10f %.10f\n",x1,y1);
    return 0;
}