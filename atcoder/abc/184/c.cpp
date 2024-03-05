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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    vector<int> r(2),c(2);
    rep(i,2)cin>>r[i]>>c[i];
    if(r[0]==r[1]&&c[0]==c[1]){
        cout<<0<<endl;
    }else if(r[0]+c[0]==r[1]+c[1]||r[0]-c[0]==r[1]-c[1]||abs(r[0]-r[1])+abs(c[0]-c[1])<=3){
        cout<<1<<endl;
    }else if((r[0]+c[0])%2==(r[1]+c[1])%2){
        cout<<2<<endl;
    }else{
        bool flag=false;
        for(int i=-3;i<=3;i++){
            for(int j=-3;j<=3;j++){
                int a=r[0]+i,b=c[0]+j;
                if(abs(a-r[0])+abs(b-c[0])<=3){
                    if(a+b==r[1]+c[1]||a-b==r[1]-c[1]||abs(a-r[1])+abs(b-c[1])<=3)flag=true;
                }
            }
        }
        if(flag)cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}