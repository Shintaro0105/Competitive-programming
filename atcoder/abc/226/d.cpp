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

int gcd(int a, int b){
    if(b==0)swap(a,b);
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    int n;cin>>n;
    int x[n],y[n];
    set<P> s;
    rep(i,n)cin>>x[i]>>y[i];
    rep(i,n)for(int j=i+1;j<n;j++){
        int X=x[i]-x[j],Y=y[i]-y[j];
        int g=gcd(X,Y);
        s.insert(make_pair(X/g,Y/g));
        s.insert(make_pair(-X/g,-Y/g));
    }
    cout<<s.size()<<endl;
    return 0;
}