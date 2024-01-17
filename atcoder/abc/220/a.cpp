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
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    int ans;
    rep(i,1e3/c+1){
        if(i*c<=b&&a<=i*c){
            flag=true;
            ans=c*i;
        }
    }
    if(flag)cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}