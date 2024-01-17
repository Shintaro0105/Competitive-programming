#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    string s;cin>>s;
    int l=s.size();
    int ans=0;
    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            bool flag=true;
            for(int k=0;k<(j-i+1)/2;k++){
                if(s[i+k]!=s[j-k])flag=false;
            }
            if(flag)ans=max(ans,j-i+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}