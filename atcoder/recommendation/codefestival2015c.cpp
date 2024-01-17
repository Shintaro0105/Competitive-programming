#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    ll n,k,m,r;
    cin>>n>>k>>m>>r;
    vector<ll> s(n-1);
    rep(i,n-1)cin>>s[i];
    sort(s.begin(),s.end());
    if(n==1){
        cout<<r<<endl;
    }else if(n==k){
        ll sum=0;
        rep(i,k-1){
            sum+=s[n-2-i];
        }
        if(sum>=r*k){
            cout<<0<<endl;
            return 0;
        }else if(r*k-sum>m){
            cout<<-1<<endl;
            return 0;
        }else{
            cout<<r*k-sum<<endl;
        }
    }else{
        ll sum=0;
        rep(i,k){
            sum+=s[n-2-i];
        }
        if(sum>=r*k){
            cout<<0<<endl;
            return 0;
        }
        sum-=s[n-k-1];
        if(r*k-sum>m){
            cout<<-1<<endl;
            return 0;
        }else{
            cout<<r*k-sum<<endl;
        }
    }
    return 0;
}