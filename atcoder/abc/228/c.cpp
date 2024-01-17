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
    int n,k;
    cin>>n>>k;
    vector<P> p(n);
    rep(i,n){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        p[i]=make_pair(p1+p2+p3,i);
    }
    sort(p.begin(),p.end());
    vector<bool> flag(n,false);
    rep(i,n){
        auto [a,b]=p[i];
        if(a+300>=p[n-k].first){
            flag[b]=true;
        }
    }
    rep(i,n){
        if(flag[i])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}