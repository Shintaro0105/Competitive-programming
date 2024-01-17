#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    vector<bool> p(1e6+1,true);
    p[0]=false;
    p[1]=false;
    for(ll i=2;i<1e6+1;i++){
        if(p[i]){
            for(ll j=2*i;j<1e6+1;j+=i){
                p[j]=false;
            }
        }
    }
    vector<ll> q;
    for(int i=2;i<1e6+1;i++){
        if(p[i])q.push_back(i);
    }
    //for(int i=0;i<10;i++)cout<<q[i]<<endl;
    ll k=q.size();
    ll ans=0;
    int j=k-1;
    for(int i=0;i<k;i++){
        while(i<j){
            if(q[j]*q[j]*q[j]>(long double)n/(long double)q[i]){
                j--;
            }else{
                ans+=j-i;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}