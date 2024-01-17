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
using namespace std;
using ll = long long int;

int main(){
    int n,k;cin >> n >> k;
    int a=0,ans=0;
    for(int i=1;i<=k;i++)a+=i;
    for(int i = 1;i<=n;i++){
        ans+=i*100*k+a;
    }
    cout << ans << endl;
}