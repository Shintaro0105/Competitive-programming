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
    int n;cin>>n;
    int a[n];
    
    vector<bool> b(2001,false);
    rep(i,n){
        cin>>a[i];
        b[a[i]]=true;
    }
    int i=0;
    while(1){
        if(b[i]){
            i++;
        }else{
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}