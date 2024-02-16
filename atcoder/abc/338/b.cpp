#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;cin>>s;
    vector<int> c(26,0);
    for(char t:s){
        c[t-'a']++;
    }
    int j=-1;
    char ans;
    for(int i=25;i>=0;i--){
        if(c[i]>=j){
            j=c[i];
            ans='a'+i;
        }
    }
    cout<<ans<<endl;
}