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
    ll cnt=0;
    while(a!=b){
        if(a<b)swap(a,b);
        //cout<<a<<' '<<b<<endl;
        if(b==1){
            cnt+=a-1;
            break;
        }
        if(a%b==0){
            cnt+=a/b-1;
            break;
        }
        cnt+=a/b;
        a=a%b;
    }
    cout<<cnt<<endl;
    return 0;
}