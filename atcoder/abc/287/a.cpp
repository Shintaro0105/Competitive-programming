#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    rep(i,n){
        string s;
        cin>>s;
        if(s=="For")sum++;
    }
    if(sum>=(n+1)/2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}