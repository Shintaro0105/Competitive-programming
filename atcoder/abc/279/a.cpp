#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=0;
    for(char c:s){
        if(c=='v')ans++;
        else ans+=2;
    }
    cout<<ans<<endl;
    return 0;
}