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
    int x[n],y[n];
    rep(i,n){
        cin>>x[i]>>y[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                ll s=abs((x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i]));
                if(s>0)cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}