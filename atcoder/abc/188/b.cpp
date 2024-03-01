#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    rep(i,n)cin>>a[i];
    int sum=0;
    rep(i,n){
        cin>>b[i];
        sum+=a[i]*b[i];
    }
    if(sum==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}