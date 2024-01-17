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
    int n;cin>>n;
    vector<int> c(n);
    vector a(n,vector<bool>(37,false));
    rep(i,n){
        cin>>c[i];
        rep(j,c[i]){
            int A;cin>>A;
            a[i][A]=true;
        }
    }
    int x;cin>>x;
    vector<pair<int,int>> p;
    rep(i,n){
        if(a[i][x])p.push_back(make_pair(c[i],i));
    }
    sort(ALL(p));
    if(p.size()!=0){
        vector<int> b;
        for(auto [i,j]:p){
            if(i==p[0].first){
                b.push_back(j+1);
            }
        }
        cout<<b.size()<<endl;
        rep(i,b.size()-1)cout<<b[i]<<' ';
        cout<<b[b.size()-1]<<endl;
    }else{
        cout<<0<<endl;
        cout<<endl;
    }
    
    return 0;
}