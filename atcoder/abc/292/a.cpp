#include <iostream>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;
    cin>>s;
    rep(i,s.size()){
        char c=s[i]-'a'+'A';
        cout<<c;
    }
    cout<<endl;
    return 0;
}