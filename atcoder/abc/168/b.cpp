#include <iostream>
using namespace std;

int main(){
    int k;cin>>k;
    string s;cin>>s;
    if(s.size()<=k)cout<<s<<endl;
    else cout<<s.substr(0,k)<<"..."<<endl;
    return 0;
}