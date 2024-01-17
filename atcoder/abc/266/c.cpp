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
using P = pair<double,double>;
const int mod=998244353;
const int inf=1e9+1;

double f(P x,P y,P z){
    return (y.first-x.first)*(z.second-x.second)-(y.second-x.second)*(z.first-x.first);
}

int main(){
    vector<P> p(4);
    rep(i,4)cin>>p[i].first>>p[i].second;
    double t1,t2,t3,t4;
    t1=f(p[0],p[2],p[1]);
    t2=f(p[0],p[2],p[3]);
    t3=f(p[1],p[3],p[0]);
    t4=f(p[1],p[3],p[2]);
    if(t1*t2<0.0&&t3*t4<0.0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}