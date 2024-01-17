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


int main(){
    double a,b;
    cin>>a>>b;
    if(b==0){
        cout<<1<<' '<<0<<endl;
    }else{
        double x,x2,y;
        x2=1/(1+a*a/(b*b));
        x=sqrt(x2);
        y=sqrt(1-x2);
        cout<<y<<' '<<x<<endl;
    }
    return 0;
}