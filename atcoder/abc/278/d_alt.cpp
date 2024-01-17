#include <iostream>
#include <vector>
#include <stack>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<int,ll>;

int main(){
    int n;cin>>n;
    vector<stack<P>> a(n);
    rep(i,n){
        ll b;cin>>b;
        a[i].push(make_pair(0,b));
    }
    int q;cin>>q;
    int l=-1;
    ll c=0;
    rep(i,q){
        int t;cin>>t;
        if(t==1){
            ll x;cin>>x;
            c=x;
            l=i;
        }else if(t==2){
            int j;cin>>j;
            j--;
            ll x;
            cin>>x;
            auto [k,b]=a[j].top();
            if(k>l){
                a[j].push(make_pair(i,b+x));
            }else{
                a[j].push(make_pair(i,x));
            }
        }else{
            int j;cin>>j;j--;
            auto [k,b]=a[j].top();
            if(k>l){
                cout<<c+b<<'\n';
            }else{
                cout<<c<<'\n';
            }
        }
    }
    return 0;
}