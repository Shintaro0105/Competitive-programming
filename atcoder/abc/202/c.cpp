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
using namespace std;
using ll = long long int;

int main(){
    int n;cin >> n;
    int c[n],a[n],d[n];
    pair<int,int> b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        d[i]=0;
    }
    for(int i=0;i<n;i++){
        cin >> b[i].first;
        b[i].second = 0;
    }
    for(int i=0;i<n;i++){
        cin >> c[i];
        b[c[i]-1].second++;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        d[b[i].first-1]+=b[i].second;
        
    }
    for(int i=0;i<n;i++){
        ans+=d[a[i]-1];
    }
    cout << ans << endl;
}