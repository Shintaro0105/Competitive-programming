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
    int n;cin>>n;
    int k;cin>>k;
    bool flag=true;
    if(k>n/2)flag=false;
    int ans[n];
    vector<bool> b(n+1,false);
    rep(i,(n-2*k)/(2*k)){
        rep(j,2*k){
            if(j<k){
                ans[i*2*k+j]=i*2*k+k+j;
            }else{
                ans[i*2*k+j]=i*2*k-k+j;
            }
            if(i*2*k+k+j>n||i*2*k-k+j<1)flag=false;
            else {
                b[i*2*k+k+j]=true;
                b[i*2*k-k+j]=false;
            }
        }
    }
    rep(j,k){
        ans[((n-2*k)/(2*k))*(2*k)+j]=i+k;
        if(((n-2*k)/(2*k))*(2*k)+k>n)flag=false;
    } 
    for(int i=((n-2*k)/(2*k))*(2*k)+k;i<n;i++){
        
    }
    return 0;
}