#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    bool flag=true;
    if(!('A'<=s[0]&&s[0]<='Z'))flag=false;
    for(int i=1;i<s.size();i++){
        if(!('a'<=s[i]&&s[i]<='z'))flag=false;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}