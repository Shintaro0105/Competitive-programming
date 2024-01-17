#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

//なんでか分かんないけどバグる

int main(){
    int n;cin>>n;
    ll m=1e9;
    vector<ll> a(n);
    rep(i,n){
        cin>>a[i];
        m=min(m,a[i]);
    }
    rep(i,n)a[i]-=m;
    set<int> s;
    rep(i,n)s.insert(i);
    int q;cin>>q;
    rep(qi,q){
        int t;cin>>t;
        if(t==1){
            ll x;cin>>x;
            s.clear();
            //cout<<s.size()<<endl;
            m=x;
        }else if(t==2){
            int i;cin>>i;
            ll x;cin>>x;
            i--;
            auto ita=s.lower_bound(i);
            int j=*ita;
            if(j==i){
                a[i]+=x;
            }else{
                a[i]=x;
                s.insert(i);
            }
        }else{
            int i;cin>>i;
            i--;
            auto ita=s.lower_bound(i);
            //cout<<*ita<<' '<<i<<endl;
            int j=*ita;
            if(j==i){
                cout<<a[i]+m<<'\n';
            }else{
                cout<<m<<'\n';
            }
        }
    }
    return 0;
}