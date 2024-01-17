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
    ll n;cin>>n;
    stack<char> s;
    while(n!=0){
        if(n%2==0){
            n/=2;
            s.push('B');
        }else{
            n--;
            s.push('A');
        }
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}