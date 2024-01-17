#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> s(n,0);
    rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--;b--;
        s[a]++;
        s[b]++;
    }
    bool f=true;
    rep(i,n){
        if(!(s[i]==1||s[i]==n-1)){
            f=false;
        }
    }
    if(f){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}