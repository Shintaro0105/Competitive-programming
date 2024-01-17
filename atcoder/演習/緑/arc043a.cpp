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
const int mod=998244353;
const int inf=1e9+1;

int main(){
    double n,a,b;
    cin>>n>>a>>b;
    vector<double> s(n);
    double sum=0,ma=-1,mi=1e9+1;
    rep(i,n){
        cin>>s[i];
        sum+=s[i];
        ma=max(ma,s[i]);
        mi=min(mi,s[i]);
    }
    if(ma==mi){
        if(b==0){
            cout<<fixed<<setprecision(10)<<1<<' '<<a-sum/n<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else{
        cout<<fixed<<setprecision(10)<<b/(ma-mi)<<' '<<a-(sum*b/(ma-mi))/n<<endl;
    }
    return 0;
}