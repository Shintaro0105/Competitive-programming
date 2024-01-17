#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;

int main(){
    vector<string> s(3);
    rep(i,3)cin>>s[i];
    vector<int> c(26,0);
    rep(i,3){
        for(char a:s[i]){
            int k=a-'a';
            c[k]++;
            //cout<<k<<endl;
        }
    }
    int cnt=0;
    rep(i,26)if(c[i]>0)cnt++;
    if(cnt>10){
        cout<<"UNSOLVABLE"<<endl;
    }else{
        vector<int> st;
        rep(i,26)if(c[i]>0)st.push_back(i);
        vector<int> b(10);
        rep(i,10)b[i]=i;
        do{
            vector<int> ref(26,-1);
            rep(i,cnt){
                ref[st[i]]=b[i];
            }
            int n1=0,n2=0,n3=0;
            for(char a:s[0]){
                int k=a-'a';
                n1*=10;
                n1+=ref[k];
            }
            for(char a:s[1]){
                int k=a-'a';
                n2*=10;
                n2+=ref[k];
            }
            for(char a:s[2]){
                int k=a-'a';
                n3*=10;
                n3+=ref[k];
            }
            if(n1>=pow(10,s[0].size()-1)&&n2>=pow(10,s[1].size()-1)&&n3>=pow(10,s[2].size()-1)){
                if(n1+n2==n3){
                    cout<<n1<<'\n'<<n2<<'\n'<<n3<<'\n';
                    return 0;
                }
            }
        }while(next_permutation(b.begin(),b.end()));
        cout<<"UNSOLVABLE"<<endl;
    }
    return 0;
}