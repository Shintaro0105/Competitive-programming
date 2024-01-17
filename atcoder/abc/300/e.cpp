#include <iostream>
#include <map>
using namespace std;
const int mod=998244353;

long long modinv(long long a=5, long long m=mod) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

long long N;
map<long long,long long> memo;
int inv=modinv();

int dp(long long n){
    if(n>=N) return n==N?1:0;
    if(memo.count(n))return memo[n];
    long long res=0;
    for(int i=2;i<=6;i++){
        res+=dp(i*n);
        res%=mod;
    }
    return memo[n]=(res*inv)%mod;
}

int main(){
    cin>>N;
    cout<<dp(1)<<endl;
    return 0;
}