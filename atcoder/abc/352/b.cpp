#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s,t;cin>>s>>t;
    vector<int> a;
    int n=s.size();
    int j=0;
    for(int i=0;i<n;i++){
        while(s[i]!=t[j]){
            j++;
        }
        a.push_back(j+1);
        j++;
    }
    for(auto i:a)cout<<i<<" ";
    cout<<endl;
    return 0;
}