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

int main(){
    ll a,b;cin>>a>>b;
    bool flag=true;
    while(a!=0&&b!=0){
        int A=a%10,B=b%10;
        a/=10;
        b/=10;
        //cout<<A<<' '<<B<<endl;
        if(A+B>=10){
            flag=false;
            break;
        }
    }
    if(!flag){
        cout<<"Hard"<<endl;
    }else{
        cout<<"Easy"<<endl;
    }
    return 0;
}