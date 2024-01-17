#include <iostream>
#include <vector>
#include <set>
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
using P = pair<int,int>;
const int mod=998244353;
const int inf=1e9+1;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    int a=0,t=0;
    rep(i,n){
        if(s[i]=='A'){
            a++;
        }else{
            t++;
        }
    }
    if(a>t){
        cout<<'A'<<endl;
    }else if(t>a){
        cout<<'T'<<endl;
    }else{
        if(s[n-1]=='A'){
            cout<<'T'<<endl;
        }else{
            cout<<'A'<<endl;
        }
    }
    return 0;
}