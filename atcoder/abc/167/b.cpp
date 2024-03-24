#include<iostream>
using namespace std;

int main(){
    int a,b,c,k;cin>>a>>b>>c>>k;
    int ans=0;
    if(a>=k)ans+=k;
    else if(a+b>=k)ans+=a;
    else if(a+b+c>=k)ans+=a-(k-a-b);
    cout<<ans<<endl;
}