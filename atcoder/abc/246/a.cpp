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
    int x[3],y[3];
    rep(i,3){
        cin>>x[i]>>y[i];
    }
    if(x[0]==x[1]){
        cout<<x[2];
    }
    if(x[2]==x[1]){
        cout<<x[0];
    }
    if(x[2]==x[0]){
        cout<<x[1];
    }
    cout<<' ';
    if(y[0]==y[1]){
        cout<<y[2]<<endl;
    }
    if(y[2]==y[1]){
        cout<<y[0]<<endl;
    }
    if(y[2]==y[0]){
        cout<<y[1]<<endl;
    }
    return 0;
}