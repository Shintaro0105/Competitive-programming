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
    string s;cin>>s;
    int m=0,ans=-1;
    bool f=false;
    rep(i,n){
        if(s[i]=='-'){
            f=true;
            if(m>0)ans=max(ans,m);
            m=0;
        }else{
            m++;
            if(f)ans=max(ans,m);
        }
    }
    cout<<ans<<endl;
    return 0;
}