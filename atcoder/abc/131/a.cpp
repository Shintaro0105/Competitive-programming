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
#define rep(i,n) for(int i = 0;i < (n);i++)
using namespace std;
using ll = long long int;


int main(){
    bool flag=true;
    string x;cin>>x;
    rep(i,4){
        
        if(i!=0){
            if(x[i]==x[i-1]){
                flag=false;
            }
        }
    }
    if(flag){
        cout<<"Good"<<endl;
    }else{
        cout<<"Bad"<<endl;
    }
}