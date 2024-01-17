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
    int n,m;cin>>n>>m;
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    bool flag=false;
    sort(s.begin(),s.end());
    do{
        bool f=true;
        rep(i,n-1){
            int sum=0;
            rep(j,m){
                if(s[i][j]!=s[i+1][j])sum++;
            }
            if(sum!=1)f=false;
        }
        if(f)flag=true;
    }while(next_permutation(s.begin(),s.end()));
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}