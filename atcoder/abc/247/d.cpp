#include <iostream>
#include <queue>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;
using P = pair<ll,ll>;

int main(){
    int q;
    cin>>q;
    queue<P> p;
    rep(qi,q){
        int t;
        cin>>t;
        if(t==1){
            ll x,c;
            cin>>x>>c;
            p.push(make_pair(x,c));
        }else{
            int c;
            cin>>c;
            ll res=0;
            while(c>0){
                auto& [a,b]=p.front();
                if(c>b){
                    c-=b;
                    res+=a*b;
                    p.pop();
                }else{
                    res+=a*c;
                    if(b==c)p.pop();
                    else b-=c;
                    c=0;
                }
            }
            cout<<res<<endl;
        }
    }
}