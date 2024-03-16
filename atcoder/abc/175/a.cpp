#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    int c=0,ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')c++;
        else c=0;
        ans=max(c,ans);
    }
    cout<<ans<<endl;
    return 0;
}