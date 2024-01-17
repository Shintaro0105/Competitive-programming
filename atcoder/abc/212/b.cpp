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
    string s;cin >> s;
    int x[4];
    rep(i,4){
        x[i]=(int)s[i]-48;
        //cout<<x[i]<<endl;
    }
    bool flag=true;
    if(x[0]==x[1]&&x[1]==x[2]&&x[2]==x[3]){
        flag=false;
    }else{
        if(x[1]==(x[0]+1)%10&&x[2]==(x[1]+1)%10&&x[3]==(x[2]+1)%10){
            flag=false;
        }
    }
    
    
    if(flag){
        printf("Strong\n");
    }else{
        printf("Weak\n");
    }
}