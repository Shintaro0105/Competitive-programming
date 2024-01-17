#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    double x=1.0,y=1.0;
    rep(i,10){
        double g=2*-y*y+log(x)-5,h=x*y+3*x+y,gx=2+1/x,gy=-2*y,hx=y+3,hy=x+1;
        x=x-(g*hy-h*gy)/(gx*hy-gy*hx);
        y=y-(-g*hx+h*gx)/(gx*hy-gy*hx);
        printf("%0.6f %0.6f\n",x,y);
    }                                                                                                                       
}