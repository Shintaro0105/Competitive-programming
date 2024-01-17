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
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    int n;cin>>n;
    set<int> s;
    rep(i,n){
        int a;cin>>a;
        s.insert(a);
    }
    if(s.size()==1){
        cout<<1<<endl;
        return 0;
    }else{
        vector<int> a;
        int m=s.size();
        for(int b:s){
            a.push_back(b);
        }
        int g=0;
        rep(i,m-1){
            g=gcd(g,abs(a[i+1]-a[i]));
        }
        if(g>1)cout<<1<<endl;
        else cout<<2<<endl;
    }
    
    return 0;
}