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

int main(){
    int n;cin>>n;
    vector<pair<int,int>> a(n),b(n);
    int ans=1e9;
    rep(i,n){
        cin>>a[i].first>>b[i].first;
        a[i].second=i;
        b[i].second=i;
        ans=min(ans,a[i].first+b[i].first);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[0].second==b[0].second){
        ans=min(ans,max(a[0].first,b[1].first));
        ans=min(ans,max(a[1].first,b[0].first));
    }else{
        ans=min(ans,max(a[0].first,b[0].first));
    }
    cout<<ans<<endl;
    return 0;
}