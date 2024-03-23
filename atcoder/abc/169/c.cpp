#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll A,B1,B2;
    scanf("%lld %lld.%lld", &A, &B1, &B2);

    ll ans = A * (B1 * 100 + B2) / 100;
    cout << ans << endl;
}