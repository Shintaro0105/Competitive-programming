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
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(m);
    vector<string> s(n);
    rep(i,m)cin>>a[i];
    int ma=-1;
    vector<int> b(n);
    rep(i,n){
        cin>>s[i];
        int sum=0;
        rep(j,m){
            if(s[i][j]=='o')sum+=a[j];
        }
        sum+=i+1;
        b[i]=sum;
        ma=max(sum,ma);
    }
    vector<int> ans(n,0);
    rep(i,n){
        priority_queue<int> pq;
        rep(j,m){
            if(s[i][j]=='x')pq.push(a[j]);
        }
        int sum=b[i];
        while(ma>sum){
            int j=pq.top();
            pq.pop();
            sum+=j;
            ans[i]++;
        }
    }
    rep(i,n)cout<<ans[i]<<endl;
    return 0;
}