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

bool asc_desc(pair<ll, ll>& left, pair<ll, ll>& right) {
    if (left.first == right.first) {
        return right.second < left.second;
    } else {
        return left.first  < right.first;
    }
}

ll gcd(ll a, ll b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    ll a,b;cin>>a>>b;
    ll g=gcd(a,b);
    int cnt=0;
    a/=g;
    b/=g;
    if(a>b)swap(a,b);
    while(a>0&&b>0){
        a--;b--;
        vector<pair<ll,ll>> p;
        for(ll i=2;i*i<=b-a;i++){
            if(a%i==b%i){
                p.push_back({a%i,i});
            }
        }
        if(p.size()==0){
            cnt+=a;
            break;
        }
        sort(p.begin(),p.end(),asc_desc);
        cnt+=p[0].first;
        a-=p[0].first;
        b-=p[0].first;
        a/=p[0].second;
        b/=p[0].second;
    }
    cout<<cnt<<endl;
    return 0;
}