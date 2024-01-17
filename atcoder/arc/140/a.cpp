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
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int ans=inf;
    rep(i,n){
        if(n%(i+1)==0){
            int l=i+1;
            int sum=0;
            rep(k,l){
                vector<int> c(26,0);
                rep(j,n/l){
                    int d=s[l*j+k]-'a';
                    c[d]++;
                }
                int m=0;
                rep(k,26){
                    m=max(m,c[k]);
                    sum+=c[k];
                    //cout<<' '<<c[k];
                }
                //cout<<endl;
                sum-=m;
                
            }
            //cout<<l<<' '<<sum<<endl;
            if(sum<=k){
                ans=min(ans,l);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}