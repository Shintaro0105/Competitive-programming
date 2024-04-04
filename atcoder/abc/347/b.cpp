#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string s;cin>>s;
    int n = s.size();
    set<string> st;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            st.insert(s.substr(i,j));
        }
    }
    cout<<st.size()<<endl;
    return 0;
}