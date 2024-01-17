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
    int n,c,k;cin>>n>>c>>k;
    vector<int> t(n);
    rep(i,n)cin>>t[i];
    sort(t.begin(),t.end());
    int sum=1,p=1,cu=t[0];
    for(int i=1;i<n;i++){
        if(t[i]<=cu+k&&p<c){
            p++;
        }else{
            sum++;
            p=1;
            cu=t[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}