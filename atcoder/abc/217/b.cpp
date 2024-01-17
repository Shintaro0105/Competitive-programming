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
using P = pair<int,int>;


int main(){
    bool t[4];
    rep(i,4)t[i]=true;
    string S[4]={"ABC","ARC","AGC","AHC"};
    rep(i,3){
        string s;cin>>s;
        if(s==S[0]){
            t[0]=false;
        }else if(s==S[1]){
            t[1]=false;
        }else if(s==S[2]){
            t[2]=false;
        }else if(s==S[3]){
            t[3]=false;
        }
    }
    rep(i,4){
        if(t[i])cout<<S[i]<<endl;
    }
    return 0;
}