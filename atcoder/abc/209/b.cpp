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
    int n,x;cin>>n>>x;
    int sum=0;
    rep(i,n){
        int a;cin>>a;
        int b=i%2;
        sum+=a-b;
    }
    if(sum<=x){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}