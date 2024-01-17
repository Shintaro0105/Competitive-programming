#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <map>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n;cin>>n;
    ll X;
    scanf("%lld",&X);
    string S;cin>>S;
    stack<char> s;
    rep(i,n){
        if(S[i]=='L'){
            s.push(S[i]);
        }else if(S[i]=='R'){
            s.push(S[i]);
        }else if(S[i]=='U'){
            if(s.empty()){
                s.push(S[i]);
            }else{
                if(s.top()=='L'||s.top()=='R'){
                    s.pop();
                }else{
                    s.push(S[i]);
                }
            }
        }
    }
    stack<char> t;
    while(!s.empty()){
        char d;
        d = s.top();
        s.pop();
        t.push(d);
    }
    while(!t.empty()){
        char c;
        c = t.top();
        //cout<<c<<endl;
        t.pop();
        if(c=='U'){
            if(X%2==0){
                X/=2;
            }else{
                X=(X-1)/2;
            }
        }else if(c=='R'){
            X=X*2+1;
        }else if(c=='L'){
            X*=2;
        }
    }
    printf("%lld\n",X);
    return 0;
}