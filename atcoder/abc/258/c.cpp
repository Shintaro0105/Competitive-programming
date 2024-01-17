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
    int n,q;cin>>n>>q;
    string s;
    cin>>s;
    int r=0;
    rep(qi,q){
        int t,x;
        cin>>t>>x;
        if(t==1){
            r+=n-x;
            r%=n;
        }else{
            cout<<s[(r+x-1)%n]<<endl;
        }
    }
    return 0;
}