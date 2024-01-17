#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple
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
    int n,x;
    cin>>n>>x;
    int a[n];
    rep(i,n)cin>>a[i];
    x--;
    int cnt=0,c=x;
    vector<bool> flag(n,false);
    while(1){
        if(flag[c])break;
        else flag[c]=true;
        c=a[c];
        c--;
        //cout<<c<<endl;
    }
    rep(i,n)if(flag[i])cnt++;
    cout<<cnt<<endl;
    return 0;
}