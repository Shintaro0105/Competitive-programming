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

int main(){
    ll n;cin>>n;
    int ans=0;
    for(int i=1;i<1e6;i++){
        int k=i,c=0;
        while(k){
            k/=10;
            c++;
        }
        if(pow(10,c)*i+i<=n)ans++;
    }
    cout<<ans<<endl;
    return 0;
}