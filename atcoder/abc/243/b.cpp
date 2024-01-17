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
    int n;cin>>n;
    int res1=0, res2=0;
    int a[n], b[n];
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];
    rep(i,n){
        rep(j,n){
            if(a[i]==b[j]){
                if(i==j){
                    res1++;
                }else{
                    res2++;
                }
            }
        }
    }
    cout<<res1<<endl;
    cout<<res2<<endl;
    return 0;
}