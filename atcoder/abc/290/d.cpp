#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        --k;
        int a = n / gcd(n, d);
        cout << (long long) d * k % n + k / a << '\n';
    }
}
