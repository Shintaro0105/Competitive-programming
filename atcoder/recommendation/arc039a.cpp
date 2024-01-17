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
    int a,b;cin>>a>>b;
    int ma=a-b;
    int A[3],B[3];
    int n=a,m=b;
    rep(i,3){
        A[i]=n%10;
        n/=10;
        B[i]=m%10;
        m/=10;
    }
    rep(i,3){
        int c=0;
        rep(j,3){
            if(i!=j){
                c+=A[j]*pow(10,j);
            }else{
                c+=9*pow(10,j);
            }
        }
        ma=max(ma,c-b);
    }
    rep(i,3){
        int c=0;
        rep(j,3){
            if(i!=j){
                c+=B[j]*pow(10,j);
            }else{
                if(j==2)c+=pow(10,j);
            }
        }
        ma=max(ma,a-c);
    }
    cout<<ma<<endl;
    return 0;
}