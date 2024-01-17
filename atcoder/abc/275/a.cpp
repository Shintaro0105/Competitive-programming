#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using P = pair<int,int>;

int main(){
    int n;
    cin>>n;
    vector<P> h(n);
    rep(i,n){
        cin>>h[i].first;
        h[i].second=i+1;
    }
    sort(h.begin(),h.end());
    cout<<h[n-1].second<<endl;
    return 0;
}