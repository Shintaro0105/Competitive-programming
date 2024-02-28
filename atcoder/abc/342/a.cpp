#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;cin>>s;
    vector<int> c(26,0);
    for(int i = 0;i < s.size();i++){
        c[s[i]-'a']++;
    }
    for(int i = 0;i < s.size();i++){
        if(c[s[i]-'a']==1){
            cout<<i+1<<endl;
            return 0;
        }
    }
}