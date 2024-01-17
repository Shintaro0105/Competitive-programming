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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> c(26,0);
    rep(i,n){
        int cnt=1;
        while(s[i]==s[i+1]&&i<n-1){
            cnt++;
            i++;
        }
        c[(int)(s[i]-'a')]=max(c[(int)(s[i]-'a')],cnt);
    }
    int ans=0;
    rep(i,26)ans+=c[i];
    cout<<ans<<endl;
    return 0;
}