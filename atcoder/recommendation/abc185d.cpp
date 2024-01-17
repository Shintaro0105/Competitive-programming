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
    int n,m;
    cin>>n>>m;
    int a[m+2];
    a[0]=0;
    a[m+1]=n+1;
    rep(i,m){
        cin>>a[i+1];
    }
    vector<int> b;
    sort(a,a+m+2);
    rep(i,m+1){
        int d=a[i+1]-a[i]-1;
        if(d>0){
            b.push_back(d);
        }
    }
    int cnt=0;
    sort(b.begin(),b.end());
    if(b.size()){
        int k=b[0];
        
        for(int l:b){
            if(l%k==0)cnt+=l/k;
            else{
                cnt+=l/k+1;
            }
        }
    }
    if(m==0)cnt=1;
    cout<<cnt<<endl;
    return 0;
}