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
#define ALL(a)  (a).begin(),(a).end()
using namespace std;
using ll = long long int;
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    stack<int> st;
    vector<int> ok(n+1,0);
    rep(i,n){
        if(s[i]=='('){
            st.push(i);
        }else if(s[i]==')'&&!st.empty()){
            int l=st.top();
            st.pop();
            int r=i+1;
            ok[l]++;
            ok[r]--;
        }
    }
    rep(i,n)ok[i+1]+=ok[i];
    string ans;
    rep(i,n){
        if(ok[i]==0)ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}