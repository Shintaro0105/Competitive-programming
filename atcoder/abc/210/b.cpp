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
    int n;cin>>n;
    string S;cin >> S;
    int i=0;
    while(S[i]=='0'){
        i++;
    }
    if(i%2==0){
        cout<<"Takahashi"<<endl;
    }else{
        cout<<"Aoki"<<endl;
    }
}