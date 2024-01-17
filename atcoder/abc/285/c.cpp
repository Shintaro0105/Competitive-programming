#include <iostream>
using namespace std;
using ll = long long int;

int main(){
    ll ans=0;
    string s;
    cin>>s;
    ll c=1;
    for(int i=s.size()-1;i>=0;i--){
        char d=s[i]-'A'+1;
        //cout<<d<<endl;
        ans+=(ll)d*c;
        c*=26;
    }
    printf("%lld\n",ans);
    return 0;
}