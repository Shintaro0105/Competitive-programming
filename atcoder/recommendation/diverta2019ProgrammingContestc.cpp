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
    vector<string> s(n);
    rep(i,n)cin>>s[i];
    int cnt=0,cb=0,ca=0,cba=0;
    rep(i,n){
        rep(j,s[i].size()-1){
            if(s[i][j]=='A'&&s[i][j+1]=='B')cnt++;
        }
        if(s[i][0]=='B'&&s[i][s[i].size()-1]=='A'){
            cba++;
        }else if(s[i][0]=='B'){
            cb++;
        }else if(s[i][s[i].size()-1]=='A'){
            ca++;
        }
    }
    if(cb>0&&ca>0){
        cnt+=cba+1+min(ca-1,cb-1);
    }else if(cb>0||ca>0){
        cnt+=cba;
    }else{
        if(cba>0){
            cnt+=cba-1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}