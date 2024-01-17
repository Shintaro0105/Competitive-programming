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
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    rep(i,n-1){
        if(abs(a[i]-a[i+1])==1){
            cout<<a[i]<<' ';
        }else{
            if(a[i]>a[i+1]){
                for(int j=a[i];j>a[i+1];j--){
                    cout<<j<<' ';
                }
            }else{
                for(int j=a[i];j<a[i+1];j++){
                    cout<<j<<' ';
                }
            }
        }
    }
    cout<<a[n-1]<<endl;
    return 0;
}