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
    int n,w;cin>>n>>w;
    int a[n];
    rep(i,n)cin>>a[i];
    vector<bool> flag(w+1,false);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]<=w)flag[a[i]+a[j]+a[k]]=true;
            }
            if(a[i]+a[j]<=w)flag[a[i]+a[j]]=true;
        }
        if(a[i]<=w)flag[a[i]]=true;
    }
    int cnt=0;
    rep(i,w+1){
        if(flag[i])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}