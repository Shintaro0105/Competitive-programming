#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;cin>>n;
    bool flag=false;
    vector<int> s;
    while(n!=0){
        s.push_back(n%10);
        n/=10;
    }
    int m=s.size();
    rep(i,m+1){
        bool f=true;
        s.push_back(0);
        rep(j,(m+i)/2){
            if(s[j]!=s[m+i-1-j])f=false;
        }
        if(f)flag=true;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}