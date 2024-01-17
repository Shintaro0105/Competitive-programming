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
using namespace std;
using ll = long long int;
pair<ll,ll> V[200000];

int main(){
    ll n,k;cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> V[i].first;
        cin >> V[i].second;
    }
    sort(V,V+n);
    ll ans=0,m=k,i=0;
    while(m!=0){
        m--;ans++;
        if(i>=n){
            ans+=m;
            break;
        }
        if(V[i].first>ans){
            if(m>=(V[i].first-ans)){
                m=m-(V[i].first-ans);
                ans+= (V[i].first-ans);
                
            }else{
                ans+=m;
                break;
                
            }
        }
        while(V[i].first==ans){
            m+=V[i].second;
            i++;
        }
        
    }
    cout << ans << endl;
}