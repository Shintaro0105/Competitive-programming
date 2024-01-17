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

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    const auto &res = enum_divisors(a[0]);
    int ans=1e6;
    for(int i:res){
        bool flag=true;
        int sum=0;
        rep(j,n){
            if(a[j]%i!=0){
                flag=false;
            }else{
                int d=a[j]/i;
                while(d%2==0){
                    d/=2;
                    sum++;
                }
                while(d%3==0){
                    d/=3;
                    sum++;
                }
                if(d!=1)flag=false;
            }
        }
        if(flag)ans=min(ans,sum);
    }
    if(ans!=1e6)cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}