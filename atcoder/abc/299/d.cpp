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
    int r=0,l=n+1;
    while(l-r>1){
        int mid=r+(l-r)/2;
        cout<<'?'<<' '<<mid<<endl;
        int t;cin>>t;
        if(t==0){
            r=mid;
        }else{
            l=mid;
        }
    }
    cout<<'!'<<' '<<r<<endl;
    return 0;
}