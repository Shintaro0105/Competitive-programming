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
    int n,m;cin>>n>>m;
    string s[2*n];
    rep(i,2*n)cin>>s[i];
    vector<P> p(2*n);
    rep(i,2*n){
        p[i].first=m;
        p[i].second=i;
    }
    rep(mi,m){
        rep(i,n){
            char c1=s[p[2*i].second][mi],c2=s[p[2*i+1].second][mi];
            if(c1!=c2){
                if(c1=='G'&&c2=='C'){
                    p[2*i].first--;
                }else if(c1=='C'&&c2=='P'){
                    p[2*i].first--;
                }else if(c1=='P'&&c2=='G'){
                    p[2*i].first--;
                }else if(c2=='G'&&c1=='C'){
                    p[2*i+1].first--;
                }else if(c2=='C'&&c1=='P'){
                    p[2*i+1].first--;
                }else if(c2=='P'&&c1=='G'){
                    p[2*i+1].first--;
                }
            }
            //cout<<c1<<c2<<endl;
        }
        sort(p.begin(),p.end());
    }
    rep(i,2*n){
        cout<<p[i].second+1<<endl;
    }
    return 0;
}