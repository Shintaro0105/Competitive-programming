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
vector<ll> R;
vector<ll> G;
vector<ll> B;
int r,g,b;
void func(){
    ll ans1 = 1e18, ans2 = 1e18, ans3 = 1e18;
    r=R.size();g=G.size();b=B.size();
    for(int i=0;i<r;i++){
        auto it = lower_bound(G.begin(), G.end(), R[i]);
        if(it != G.begin()) ans1 = min(ans1, R[i] - *prev(it));
        if(it != G.end()) ans1 = min(ans1, *it - R[i]); 
    }
    for(int i=0;i<b;i++){
        auto it = lower_bound(R.begin(), R.end(), B[i]);
        if(it != R.begin()) ans2 = min(ans2, B[i] - *prev(it));
        if(it != R.end()) ans2 = min(ans2, *it - B[i]);
    }
    for(int i=0;i<b;i++){
        auto it = lower_bound(G.begin(), G.end(), B[i]);
        if(it != G.begin()) ans3 = min(ans3, B[i] - *prev(it));
        if(it != G.end()) ans3 = min(ans3, *it - B[i]);
    }
    
    cout << min(ans1,ans2+ans3) << endl;
}
int main(){
    int n;cin >> n;
    for(int i=0;i<2*n;i++){
        ll a;char c;
        cin >> a >> c;
        if(c=='R')R.push_back(a);
        else if(c=='G')G.push_back(a);
        else B.push_back(a);
    }
    
    r=R.size();g=G.size();b=B.size();

    sort(R.begin(), R.end());
    sort(G.begin(), G.end());
    sort(B.begin(), B.end());
    
    if(r%2==1 && g%2==1){
        func();
    }else if(g%2==1 && b%2==1){
        R.swap(B);
        func();
    }else if(r%2==1 && b%2==1){
        G.swap(B);
        func();
    }else {cout << 0 << endl;}

}