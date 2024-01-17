#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

long double f(long double a,long double b,long double t){
    return b*t+a/pow(t+1,1.0/2.0);
}

int main(){
    long double a,b;
    cin>>a>>b;
    long double t=pow(a/(2*b),2.0/3.0)-1;
    /* cout<<t<<' '<<f(a,b,t)<<endl;
    rep(i,10){
        cout<<i<<' '<<f(a,b,i)<<endl;
    } */
    long double c=(ll)t,d=(ll)t+1;
    //cout<<c<<' '<<d<<endl;
    long double ans=min(f(a,b,c),f(a,b,d));
    printf("%.16Lf\n",ans);
    return 0;
}