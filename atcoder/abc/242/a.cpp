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
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    double a,b,c,x;cin>>a>>b>>c>>x;
    if(x<=a){
        cout<<1<<endl;
    }else if(a<x&&x<=b){
        cout<<c/(b-a)<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}