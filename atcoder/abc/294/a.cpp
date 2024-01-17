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
    vector<int> a;
    rep(i,n){
        int b;cin>>b;
        if(b%2==0){
            a.push_back(b);
        }
    }
    int m=a.size();
    rep(i,m-1){
        cout<<a[i]<<' ';
    }
    cout<<a[m-1]<<endl;
    return 0;
}