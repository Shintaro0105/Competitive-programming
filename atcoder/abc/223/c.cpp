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
    int n;cin>>n;
    double a[n],b[n];
    double c[n],sum=0;
    rep(i,n){
        double A,B;cin>>A>>B;
        a[i]=A;
        b[i]=B;
        c[i]=A/B;
        sum+=c[i];
    }
    double s=0,k=0;
    int i=0;
    while(1){
        s+=c[i];
        k+=a[i];
        if(s>=sum/2){
            break;
        }
        
        i++;
    }
    cout<<b[i]*(sum/2-s)+k<<endl;
    return 0;
}