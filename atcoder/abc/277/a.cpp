#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> p(n);
    int k;
    rep(i,n){
        cin>>p[i];
        if(x==p[i])k=i+1;
    }
    cout<<k<<endl;
    return 0;
}