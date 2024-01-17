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
    int a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    int A=0,T=0;
    A=(x/(a+c))*b*a;
    rep(i,x-(x/(a+c))*(a+c)){
        if(i+1<=a){
            A+=b;
        }
    }
    T=(x/(d+f))*d*e;
    rep(i,x-(x/(d+f))*(d+f)){
        if(i+1<=d){
            T+=e;
        }
    }
    //cout<<A<<' '<<T<<endl;
    if(A>T){
        cout<<"Takahashi"<<endl;
    }else if(A==T){
        cout<<"Draw"<<endl;
    }else if(A<T){
        cout<<"Aoki"<<endl;
    }
    return 0;
}