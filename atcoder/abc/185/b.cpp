#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,m,t;cin>>n>>m>>t;
    vector<int> a(m),b(m);
    int cap=n;
    bool flag=true;
    rep(i,m){
        cin>>a[i]>>b[i];
        if(i==0){
            cap-=a[i];
            if(cap<=0){
                flag=false;
            }
        }else{
            cap-=a[i]-b[i-1];
            if(cap<=0){
                flag=false;
            }
        }
        cap=min(n,cap+b[i]-a[i]);
    }
    cap-=t-b[m-1];
    if(cap<=0){
        flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}