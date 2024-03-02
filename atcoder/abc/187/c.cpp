#include <iostream>
#include <vector>
#include <set>
#define rep(i,n) for(int i = 0;i < (n);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    set<string> st;
    rep(i,n){
        cin>>s[i];
        if(s[i][0]=='!')st.insert(s[i]);
    }
    string t="satisfiable";
    rep(i,n){
        if(s[i][0]!='!'){
            string u="!";
            u+=s[i];
            if(st.find(u)!=st.end())t=s[i];
        }
    }
    cout<<t<<endl;
    return 0;
}