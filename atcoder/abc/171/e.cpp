#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    int x=0;
    rep(i,n){
        cin>>a[i];
        x^=a[i];
    }
    rep(i,n){
        int y=x^a[i];
        cout<<y<<' ';
    }
    cout<<endl;
    return 0;
}