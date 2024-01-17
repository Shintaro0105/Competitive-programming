#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s[i]=='c'&&i<n-1){
            if(s[i+1]!='h')flag=false;
            else i++;
        }else if(!(s[i]=='o'||s[i]=='k'||s[i]=='u'))flag=false;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}