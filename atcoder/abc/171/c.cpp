#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    string s;
    while(n){
        n--;
        s += n%(ll)26 + 'a';
        n /= (ll)26;
    }
    reverse(ALL(s));
    cout << s << endl;
    return 0;
}