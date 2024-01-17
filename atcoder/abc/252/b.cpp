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
    vector<P> a(n);
    vector<bool> b(n,false);
    rep(i,n){
        cin>>a[i].first;
        a[i].second=i;
    }
    rep(i,k){
        int B;cin>>B;
        B--;
        b[B]=true;
    }
    sort(a.begin(),a.end());
    bool flag=false;
    int max=a[n-1].first;
    rep(i,n){
        if(a[i].first==max){
            if(b[a[i].second]){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}