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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int m;cin>>m;
    vector<int> d(m);
    int sum=0;
    rep(i,m){
        cin>>d[i];
        sum+=d[i];
    }
    sum=sum/2+1;
    rep(i,m){
        if(sum>d[i]){
            sum-=d[i];
        }else{
            cout<<i+1<<' '<<sum<<endl;
            break;
        }
    }
    return 0;
}