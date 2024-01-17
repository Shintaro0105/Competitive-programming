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
constexpr int MAX = 30;
ll dp[MAX+1][MAX+1];

string find_kth(int A,int B,ll K){
    if (A == 0) {
        return string(B, 'b');
    }
    if (B == 0) {
        return string(A, 'a');
    }
    if (K <= dp[A - 1][B]) {
        return string("a") + find_kth(A - 1, B, K);
    }
    else {
        return string("b") + find_kth(A, B - 1, K - dp[A - 1][B]);
    }
}

int main(){
    int a,b;
    ll k;
    cin >> a >> b >> k;
    dp[0][0]=1;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if(i>0){
                dp[i][j] += dp[i-1][j];
            }
            if(j>0){
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    cout << find_kth(a,b,k) << endl;
}