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


int main(){
    char s[3],t[3];
    rep(i,3)cin>>s[i];
    rep(i,3)cin>>t[i];
    int c=0;
    rep(i,3){
        if(s[i]==t[i]){
            c++;
        }
    }
    if(c==0||c==3){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}