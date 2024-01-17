#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long int;

int main(){
    ll n;cin>>n;
    string s;
    while(n>0){
        n--;
        s+='a'+n%26;
        //cout<<n%26<<endl;
        n/=26;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}