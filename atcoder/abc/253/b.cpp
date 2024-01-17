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
    int h,w;
    cin>>h>>w;
    vector<P> a(2);
    int k=0;
    rep(i,h)rep(j,w){
        char c;cin>>c;
        if(c=='o'){
            a[k]=make_pair(i,j);
            //cout<<i<<' '<<j<<endl;
            k++;
        }
    }
    int ans=abs(a[0].first-a[1].first)+abs(a[0].second-a[1].second);
    cout<<ans<<endl;
    return 0;
}