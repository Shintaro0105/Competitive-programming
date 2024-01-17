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
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

double f(double x, double y){
    return 4*x-2*x*y/(x*x+1);
}

int main(){
    int a,b;cin>>a>>b;
    if(a>0&&b==0){
        printf("Gold\n");
    }else if(a==0&&b>0){
        printf("Silver\n");
    }else if(a>0&&b>0){
        printf("Alloy\n");
    }
}