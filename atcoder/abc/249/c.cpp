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
    int n,k;
    cin>>n>>k;
    string s[n];
    rep(i,n)cin>>s[i];
    int ans=0;
    rep(i,pow(2,n)){
        bitset<15> b(i);
        vector<int> m(26,0);
        rep(j,n){
            if(b[j]==1){
                int l=s[j].size();
                rep(k,l){
                    int x=s[j][k]-'a';
                    //cout<<x<<endl;
                    m[x]++;
                }
            }
        }
        int res=0;
        rep(j,26){
            if(m[j]==k){
                res++;
            }
        }
        ans=max(ans,res);
    }
    cout<<ans<<endl;
    return 0;
}