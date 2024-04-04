#include <iostream>
using namespace std;
using ll = long long int;

ll gcd(ll a,ll b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int main(){
    int k;cin>>k;
    int ans=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            for(int l=1;l<=k;l++){
                ans+=gcd(gcd(i,j),gcd(j,l));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}