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

ll n_ary(string str,int n){
    ll tmp=0;

    int l=str.length();
    rep(i,l){
        int k=str[l-1-i]-'0';
        tmp+=k*pow(n,i);
        //cout<<k<<endl;
    }
    
    return tmp;
}

int main(){
    int k;
    string a,b;
    cin>>k>>a>>b;
    cout<<n_ary(a,k)*n_ary(b,k)<<endl;
    return 0;
}