#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long int n=s.size();
    vector<long long int> ok;
    long long int c=0;
    for(long long int i=0;i<n;i++){
        if(s[i]=='2'){
            if(i<n-1)i++;
            if(s[i]=='5')c++;
            else {
                if(c!=0)ok.push_back(c);
                c=0;
                if(s[i]=='2'&&i!=n-1)i--;
            }
        }else{
            if(c!=0)ok.push_back(c);
            c=0;
        }
    }
    if(c!=0)ok.push_back(c);
    long long int ans=0;
    for(long long int c:ok){
        ans+=c*(c+1)/2;
    }
    cout<<ans<<endl;
    return 0;
}