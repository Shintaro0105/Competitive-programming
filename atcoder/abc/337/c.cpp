#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    int st;
    rep(i,n){
        cin>>a[i];
        a[i]--;
        if(a[i]>=0)b[a[i]]=i;
        else st=i;
    }
    vector<int> s;
    s.push_back(st+1);
    rep(i,n-1){
        s.push_back(b[st]+1);
        st=b[st];
    }
    rep(i,n)cout<<s[i]<<' ';
    cout<<endl;
}