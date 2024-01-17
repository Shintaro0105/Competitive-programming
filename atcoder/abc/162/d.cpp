#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<ll> c(26,0);
    for(char a:s)c[a-'A']++;
    ll ans= c['R'-'A'] * c['G'-'A'] * c['B'-'A'];
    rep(i,n)rep(j,n){
        if(i-j>=0&&i+j<n){
            if(s[i-j]!=s[i]&&s[i]!=s[i+j]&&s[i+j]!=s[i-j])ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}