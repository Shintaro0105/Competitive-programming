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
    int n;cin>>n;
    string s;cin>>s;
    int q;cin>>q;
    vector<int> c(26);
    rep(i,26){
        c[i]=i;
    }
    rep(i,q){
        char ci,di;cin>>ci>>di;
        rep(j,26){
            if(c[j]==ci-'a'){
                c[j]=di-'a';
            }
        }
    }
    rep(i,s.size()){
        cout<<char(c[s[i]-'a']+'a');
    }
    cout<<endl;
    return 0;
}