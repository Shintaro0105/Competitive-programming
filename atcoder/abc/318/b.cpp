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
    vector s(100,vector<bool>(100,false));
    rep(i,n){
        int a,b,c,d;cin>>a>>b>>c>>d;
        for(int i=a;i<b;i++){
            for(int j=c;j<d;j++){
                s[i][j]=true;
            }
        }
    }
    int ans=0;
    rep(i,100)rep(j,100)if(s[i][j])ans++;
    cout<<ans<<endl;
    return 0;
}