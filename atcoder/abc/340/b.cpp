#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int q;cin>>q;
    vector<int> a;
    rep(qi,q){
        int t,x;cin>>t>>x;
        if(t==1){
            a.push_back(x);
        }else{
            cout<<a[a.size()-x]<<endl;
        }
    }
    return 0;
}