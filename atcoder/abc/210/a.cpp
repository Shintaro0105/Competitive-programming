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
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n,a,x,y;cin>>n>>a>>x>>y;
    int ans=0;
    rep(i,n){
        if(i<a){
            ans+=x;
        }else{
            ans+=y;
        }
    }
    cout<<ans<<endl;
}