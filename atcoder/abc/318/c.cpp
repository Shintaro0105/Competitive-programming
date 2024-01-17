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
    double n,d,p;cin>>n>>d>>p;
    vector<double> f(n);
    int sum=0;
    rep(i,n){
        cin>>f[i];
        if(p/d<=f[i])sum++;
    }
    sort(ALL(f));
    ll ans1=(int)(sum/d+1)*p,ans2=(int)(sum/d)*p;
    for(int i=0;i<n-(int)(sum/d+1)*d;i++){
        ans1+=f[i];
    }
    for(int i=0;i<n-(int)(sum/d)*d;i++){
        ans2+=f[i];
    }
    cout<<min(ans1,ans2)<<endl;
    return 0;
}