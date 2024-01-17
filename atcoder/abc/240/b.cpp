#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;



int main(){
    int n;
    cin>>n;
    int res=1;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>{});
    if(n!=1){
        rep(i,n-1){
            if(a[i]!=a[i+1]){
                res++;
            }
        }
    }
    
    cout<<res<<endl;
}