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
    int t;cin>>t;
    rep(ti,t){
        vector<ll> x(3);
        cin>>x[0]>>x[1]>>x[2];
        sort(x.begin(),x.end());
        x[1]-=x[0];
        x[2]-=x[0];
        x[0]-=x[0];
        //cout<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
        if((x[2]-x[1])%2==0&&(x[1]-x[0])%2==0&&(x[2]-x[0])%2==0&&(x[2]+x[1]+x[0])%3==0){
            ll a=(x[0]+x[1]+x[2])/3;
            ll d=abs(x[0]-a)+abs(x[1]-a)+abs(x[2]-a);
            cout<<d/4<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}