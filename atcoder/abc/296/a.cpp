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
    bool flag=true;
    if(s[0]=='M'){
        for(int i=0;i<n;i+=2){
            if(s[i]!='M')flag=false;
        }
        for(int i=1;i<n;i+=2){
            if(s[i]!='F')flag=false;
        }
    }else{
        for(int i=0;i<n;i+=2){
            if(s[i]!='F')flag=false;
        }
        for(int i=1;i<n;i+=2){
            if(s[i]!='M')flag=false;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}