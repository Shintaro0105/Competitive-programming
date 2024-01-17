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
#include <bitset>
#include <deque>
#include <iomanip>
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    int n;cin>>n;
    int s[n], t[n];
    rep(i,n)cin>>s[i];
    rep(i,n)cin>>t[i];
    rep(i,n){
        if(i<n-1){
            if(t[i+1]>t[i]+s[i]){
                t[i+1]=t[i]+s[i];
            }
        }else{
            if(t[0]>t[i]+s[i]){
                t[0]=t[i]+s[i];
            }
        }
    }
    rep(i,n){
        if(i<n-1){
            if(t[i+1]>t[i]+s[i]){
                t[i+1]=t[i]+s[i];
            }
        }else{
            if(t[0]>t[i]+s[i]){
                t[0]=t[i]+s[i];
            }
        }
    }
    rep(i,n){
        cout<<t[i]<<endl;
    }
}