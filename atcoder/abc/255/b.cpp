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
    int a[k];
    rep(i,k){
        int b;cin>>b;
        b--;
        a[i]=b;
    }
    vector<pair<double,double>> p(n);
    rep(i,n){
        double x,y;
        cin>>x>>y;
        p[i]=make_pair(x,y);
    }
    double dist[k][n];
    vector<pair<double,pair<int,int>>> c(n*k);
    rep(i,k){
        rep(j,n){
            double d;
            d=sqrt((p[a[i]].first-p[j].first)*(p[a[i]].first-p[j].first)+(p[a[i]].second-p[j].second)*(p[a[i]].second-p[j].second));
            dist[i][j]=d;
            c[i*n+j]=make_pair(d,make_pair(i,j));
        }
    }
    sort(c.begin(),c.end());
    int l=-1,r=k*n;
    while(r-1>l){
        int mid=l+(r-l)/2;
        double R=c[mid].first;
        bool flag=true;
        vector<bool> f(n,false);
        rep(i,k)rep(j,n){
            if(dist[i][j]<=R)f[j]=true;
        }
        rep(i,n){
            if(!f[i])flag=false;
        }
        if(flag){
            r=mid;
        }else{
            l=mid;
        }
    }
    printf("%lf\n",c[r].first);
    return 0;
}