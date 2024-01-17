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
   int n,q;cin>>n>>q;
   ll a[n+1];
   ll c[n+1];
   a[0]=0;c[0]=0;
   for(int i=1;i<=n;i++){
       cin>>a[i];
       c[i]=a[i]-i;
   }
   ll ans[q];
   int l=0;
   rep(i,q){
       ll k;cin >> k;
       if(c[n]<k){
           ans[l]=a[n]+k-c[n];
           l++;
       }else{
           int j=lower_bound(c,c+n+1,k)-c;
           ans[l]=a[j]-1-c[j]+k;
           l++;
       }
   }
   rep(i,q){
       cout<<ans[i]<<endl;
   }
}