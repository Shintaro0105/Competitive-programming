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
    int k;cin>>k;
    int c=7;
    rep(i,k){
        if(c%k==0){
            cout<<i+1<<endl;
            return 0;
        }else{
            c*=10;
            c+=7;
            c%=k;
        }
    }
    cout<<-1<<endl;
    return 0;
}