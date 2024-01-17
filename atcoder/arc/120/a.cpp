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
ll a[200000];
ll ans[200000];
priority_queue<pair<ll,int>> Q;
int n;

void func(){
    ans[0]=a[0];
    for(int i=1;i<n;i++){
        ans[i]+=ans[i-1]+a[i];
    }
}

int main(){
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> a[i];
        
    }
    int y=n;
    func();
    for(int i=1;i<n;i++){
        ans[i]+=ans[i-1];
    }
    for(int i=0;i<n;i++){
        Q.push(make_pair(a[i],i));
        auto p = Q.top();
        Q.pop();
        ans[i]+=(i+1)*p.first;
        cout << ans[i] << endl;
        Q.push(p);
    }
    
}