#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n)cin >> a[i];
    bool flag=true;
    ll now=1;
    sort(ALL(a));
    rep(i,n){
        if(now!=0){
            if((ll)1e18/now<a[i]){
                cout<<-1<<endl;
                return 0;
            }else{
                now*=a[i];
            }
        }else{
            now*=a[i];
        }
        //cout<<i+1<<' '<<now<<endl;
    }
    cout<<(ll)now<<endl;
    return 0;
}