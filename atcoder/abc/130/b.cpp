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
    int n,x;cin>>n>>x;
    int l[n];
    rep(i,n)cin>>l[i];
    int cnt=1,sum=0,i=0;
    while(sum<=x){
        sum+=l[i];
        i++;
        if(sum<=x)cnt++;
        if(i>=n)break;
    }
    cout<<cnt<<endl;
}