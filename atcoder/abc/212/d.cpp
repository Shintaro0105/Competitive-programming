#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int q;cin>>q;
    priority_queue<ll,vector<ll>,greater<ll>> Q;
    ll p=0;
    rep(i,q){
        int a,x;cin>>a;
        if(a==1){
            cin>>x;
            Q.push(x-p);
        }else if(a==2){
            cin>>x;
            /* int b;
            b=Q.size();
            //cout<<b<<endl;
            ll c[b];
            rep(j,b){
                ll d=Q.top();
                c[j]=d+x;
                Q.pop();
                //cout<<c[i]<<endl;
            }
            rep(j,b){
                Q.push(c[j]);
            } */
            p+=x;
        }else{
            ll ans;
            ll e=Q.top();
            Q.pop();
            printf("%lld\n",e+p);
        }
    }
}