#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    reverse(s.begin(),s.end());
    int ans=0;
    rep(i,n){
        if('1'<=s[i]&&s[i]<='9'){
            ans++;
        }else{
            if(i<n-1){
                if(s[i+1]=='0'){
                    ans++;
                    i++;
                }else{
                    ans++;
                }
            }else{
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}